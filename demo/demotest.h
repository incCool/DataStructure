//
// Created by inc on 2018/12/12.
//

#ifndef DATASTRUCTURE_DEMOTEST_H
#define DATASTRUCTURE_DEMOTEST_H

#include "../hfiles/tools.h"
#include "demohash.h"

void main_testdemo() {

    vector<string> vstr;
    vstr.push_back("nihao");
    vstr.push_back("nihao");
    vstr.push_back("nn");
    vstr.push_back("nn");
    HashFunc hf(vstr);
    hf.print();

}

#endif //DATASTRUCTURE_DEMOTEST_H
