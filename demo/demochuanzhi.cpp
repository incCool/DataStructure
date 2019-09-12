//
// Created by inc on 2019/7/5.
//

#include "demochuanzhi.h"

void Ab::print_rui(Ab &a) {
    a.print();
}

void Ab::testMainAb() {
    Ab a1, a2;
    vector<Ab> vecA;
    vecA.push_back(a1);
    vecA.push_back(a2);

    for (int i = 0; i < vecA.size(); i++) {
        Ab b = vecA[i];
        print_rui(b);
    }


}