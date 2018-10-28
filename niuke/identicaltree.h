//
// Created by inc on 2018/10/9.
//

#ifndef DATASTRUCTURE_IDENTICALTREE_H
#define DATASTRUCTURE_IDENTICALTREE_H

#include <iostream>
#include "../hfiles/treenode.h"
#include <vector>

using namespace std;

class IdenticalTree {
public:
    vector<char> va;
    vector<char> vb;

    void priRerverseTree(TreeNode *t, vector<char> &vect) {
        if (!t) {
            vect.push_back('\0');
        } else {
            vect.push_back(t->val);
            priRerverseTree(t->left, vect);
            priRerverseTree(t->right, vect);
        }
    }
};

#endif //DATASTRUCTURE_IDENTICALTREE_H
