#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <scoped_allocator>
#include <set>
#include <time.h>
#include "stdlib.h"
//#include "demo/demotemp.h"
//#include "demo/test.h"
//#include "demo/learnfunpointer.h"
#include "demo/demochuanzhi.h"

class DEMO {
private:
    void print() { cout << "private:" << endl; }
};


using namespace std;

bool setHostTime(int &curCycle, int &curMon, int &curDay, int &curWeek, int &curHour) {
    time_t tt = time(NULL);
    struct tm *t = localtime(&tt);

    curCycle = (t->tm_year + 1900) * 100 + (t->tm_mon + 1);
    curMon = t->tm_mon + 1;
    curDay = t->tm_mday;
    curWeek = t->tm_wday;
    curHour = t->tm_hour;
    cout << "curMon: " << curMon << endl;
    return true;
}

long strToNumber(const string &str) {
    string y = str;
    if ("" == y) {
        y = "0";
    }
    return atol(str.c_str());
}

int main(int argc, char *argv[]) {

    string str = "abc";

    cout << str[0] << endl;

    int &&b = 12;
    return 0;
}


