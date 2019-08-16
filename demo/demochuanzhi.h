//
// Created by inc on 2019/7/5.
//

#ifndef DATASTRUCTURE_DEMOCHUANZHI_H
#define DATASTRUCTURE_DEMOCHUANZHI_H

#include <iostream>
#include <vector>

using namespace std;

class Ab {
public:
    int a = 1;
    int b = 2;

    void print() { cout << a << " " << b << endl; }

    Ab() {}

    void print_rui(Ab &);

    void testMainAb();


};


#endif //DATASTRUCTURE_DEMOCHUANZHI_H
