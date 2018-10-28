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

void runQueries(ifstream &infile) {

}

int main(int argc, char **argv) {
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