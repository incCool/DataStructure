//
// Created by inc on 2018/10/16.
//

#ifndef DATASTRUCTURE_DEMODRIVBASE_H
#define DATASTRUCTURE_DEMODRIVBASE_H

#include "tools.h"

class Base {
public:
    Base(int a, int b = 2) : a(a), b(b) {}


    int a;
    int b;
};

class D : public Base {
public:
    //usng Base::Base(a,b);

    D(int a, int b, int c) : Base(a, b), c(c) {
    }

    int a;
    int b;
    int c;

};

int main_demodrivbase() {
    D d(1, 6, 9);
    cout << d.b << endl;
}

#endif //DATASTRUCTURE_DEMODRIVBASE_H
