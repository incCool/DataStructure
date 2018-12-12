//
// Created by inc on 2018/11/6.
//

#ifndef DATASTRUCTURE_NIUKET1_H
#define DATASTRUCTURE_NIUKET1_H

#include "../hfiles/tools.h"

class A {
public:
    void print() {
        cout << "A..." << endl;
    }
};

void f(const A **p) {
    cout << "A::f()..." << endl;
}

void g(const A *const *p) {
    cout << "A::g()..." << endl;
}

void k(const A *&p) {
    cout << "A::k()..." << endl;
}

int main_niuke1() {
    const A *ca = new A();
    A *a = new A();
    A **p = &a;
    k(ca);
    f(p);
    g(p);
}

class A {
public:
    ~A() {
        cout << "~A()";
    }
};

class B {
public:
    virtual ~B() {
        cout << "~B()";
    }
};

class C : public A, public B {
public:
    ~C() {
        cout << "~C()";
    }
};

int main_1() {
    C *c = new C;
    B *b1 = dynamic_cast<B *>(c);
    A *a2 = dynamic_cast<A *>(b1);
    delete a2;
}

#endif //DATASTRUCTURE_NIUKET1_H
