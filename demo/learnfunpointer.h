//
// Created by inc on 2019/4/11.
//

#ifndef DATASTRUCTURE_LEARNFUNPOINTER_H
#define DATASTRUCTURE_LEARNFUNPOINTER_H

#include <iostream>

typedef int (*ADD_TWO_NUMS)(int &a, int &b);

class LearnFunPointer {
public:
    static void RegisterFunc(ADD_TWO_NUMS func) { m_lfp = func; }

    int add(int &a, int &b) {
        std::cout << a + b << std::endl;
        return a + b;
    }

    static ADD_TWO_NUMS m_lfp;

};


#endif //DATASTRUCTURE_LEARNFUNPOINTER_H
