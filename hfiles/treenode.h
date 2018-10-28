//
// Created by inc on 2018/10/9.
//

#ifndef DATASTRUCTURE_TREENODE_H
#define DATASTRUCTURE_TREENODE_H

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

#endif //DATASTRUCTURE_TREENODE_H
