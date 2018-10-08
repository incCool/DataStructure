//
// Created by inc on 2018/10/8.
//

#ifndef DATASTRUCTURE_FACTORYINC_H
#define DATASTRUCTURE_FACTORYINC_H

#include <iostream>
#include <string.h>


using namespace std;

class Fruit {
public:
    virtual void printFruit() = 0;
};

class Banana : public Fruit {
public:
    virtual void printFruit() {
        cout << "banana..." << endl;
    }
};

class Apple : public Fruit {
public:
    virtual void printFruit() {
        cout << "Apple ... " << endl;
    }
};

class Factory {
public:
    static Fruit *Create(char *name) {
        Fruit *tmp = NULL;
        if (strcmp(name, "banana") == 0) {
            tmp = new Banana();
        } else if (strcmp(name, "apple")) {
            tmp = new Apple();
        } else {
            cout << "Create fail " << endl;

        }
        return tmp;

    }
};

int main_factory() {
    Fruit *ban = Factory::Create("banana");
    if (ban == NULL) {
        cout << "创建失败！" << endl;
    }
    ban->printFruit();
    return 0;
}

#endif //DATASTRUCTURE_FACTORYINC_H
