//
// Created by inc on 2018/11/26.
//

#ifndef DATASTRUCTURE_DEMOCONST_H
#define DATASTRUCTURE_DEMOCONST_H

#include "../hfiles/tools.h"


class DemoConst {
public:
    DemoConst() {};

    void print1() {
        cout << "print1()..." << endl;
    }

    void print2() const {
        cout << "print2()..." << endl;
        cout << number << endl;
        //const 成员函数不能改变 类数据成员
    }

private:
    int number = 1;

};

class TestFoo {
public:
    explicit TestFoo(string str) {
        cout << "str: " << str << endl;
        this->str = str;
        this->str = NOTYOU;
        cout << this->str << endl;
    }

    void print(TestFoo tf) const {
        cout << "TF.STR:" << tf.str << endl;
    }

    string str;
    const string NOTYOU = "0";
};

class A {
public:
    int loc;

    virtual void print();

    enum fruit {
        apple, pear
    };
    fruit f;

};


#endif //DATASTRUCTURE_DEMOCONST_H
