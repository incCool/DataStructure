//
// Created by inc on 2018/10/2.
//

#ifndef DATASTRUCTURE_TREENODE_H
#define DATASTRUCTURE_TREENODE_H

#include <iostream>
#include <vector>
using namespace std;

typedef int ElemType;

class TreeNode{
    ElemType val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(ElemType data):val(data),left(NULL),right(NULL){}
};

/*
 * print tree by level
 * format:
 *        1
 *        2 3
 *        ...
 */
//vector<vector<int>> printTreeByLevel(TreeNode* root);

void printk();
//create tree
//TreeNode* createTree();

#endif //DATASTRUCTURE_TREENODE_H
