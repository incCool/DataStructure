//
// Created by inc on 2018/12/12.
//

#include "demotest.h"

void main_testdemo() {

    vector<string> vstr;
    vstr.push_back("nihao");
    vstr.push_back("nihao");
    vstr.push_back("nn");
    vstr.push_back("nn");
    HashFunc hf(vstr);
    hf.print();

}