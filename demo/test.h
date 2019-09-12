//
// Created by inc on 2019/4/5.
// friend demo

#ifndef DATASTRUCTURE_TEST_H
#define DATASTRUCTURE_TEST_H

#include "iostream"

class A;

using namespace std;

class B {
    int b = 3;
    friend A;
private:
    int cc = 4;
};

class A {
public:
    int a = 2;

    void print(B b) {
        cout << b.cc << endl;
    }

private:
    int b = 33;
};


#endif //DATASTRUCTURE_TEST_H
