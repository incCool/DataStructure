//
// Created by inc on 2018/10/28.
//

#ifndef DATASTRUCTURE_QUERYFILEPROG_H
#define DATASTRUCTURE_QUERYFILEPROG_H

#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <fstream>
#include <cstdlib>
#include <sstream>

using namespace std;
vector<string> v_str;
map<string, set<int> > m_str;

string cleanup_str(const string &word) {
    string ret;
    for (auto it = word.begin(); it != word.end(); ++it) {
        if (!ispunct(*it))
            ret += *it;
    }
    return ret;
}

void read_and_write(fstream &infile) {
    string text;
    while (getline(infile, text)) {
        v_str.push_back(text);
        int n = v_str.size() - 1;
        istringstream line(text);
        string word;
        while (line >> word) {

            m_str[cleanup_str(word)].insert(n);
        }
    }
}

void print_file(map<string, set<int> > &ws) {
    map<string, set<int> >::iterator iter;
    for (iter = ws.begin(); iter != ws.end(); ++iter) {
        cout << iter->first << "\t";
        auto lines = iter->second;
        cout << lines.size() << endl;
    }
}

ostream &query_and_print(const string &sought, ostream &os) {
    auto loc = m_str.find(sought);
    if (loc == m_str.end()) {
        os << sought << "出现了0次" << endl;
    } else {
        set<int> liens = loc->second;
        os << sought << "出现了" << liens.size() << "次" << endl;
        for (auto num: liens) {
            os << "\t(第" << num + 1 << "行)"
               << *(m_str.begin() + num) << endl;
        }
    }
    return os;
}

void runQueries(ifstream &infile) {
    return;
}

int main_query(int argc, char **argv) {
    fstream infile;
    if (argc < 2 || !(infile.open(argv[1]), infile)) {
        cerr << "No input file!" << endl;
        return EXIT_FAILURE;
    }
    cout << "打开文件成功！" << endl;
    read_and_write(infile);
    print_file(m_str);


    return 0;
}

#endif //DATASTRUCTURE_QUERYFILEPROG_H
