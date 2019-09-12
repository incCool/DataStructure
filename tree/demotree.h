//
// Created by inc on 2019/9/11.
//

#ifndef DATASTRUCTURE_DEMOTREE_H
#define DATASTRUCTURE_DEMOTREE_H

/**
 * tree: binaryTree
 * define: 度小于等于2
 * parent:
 * child:
 * 遍历： 前中后 ，按照根划分
 * 应用： 压缩软件 -- 赫夫曼树
 *       搜索 -- 人机对战
 */

//数组 int tree[n] 3 5 8 2 6 9 7  2*i+1 --> 左节点；2*i+2 --> 右节点
/**
 *              3(0)
 *        5(1)         8(2)
 *     2(3)   6(4)   9(5)  7(6)
 */


/**
 * 基本操作:
 * 1.创建&销毁
 * 2.节点搜索
 * 3.添加删除
 * 4.遍历
 */

/**
 * 链表：
 */
#include <iostream>

using namespace std;

class Node {
public:
    int index;
    int data;
    Node *pLChild;
    Node *pRChild;
    Node *pParent;

    Node *SearchNode(int nodeIndex);

    void DeleteNode();

    void PreorderTraversal();

    void InorderTraversal();

    void PostorderTraversal();

    Node();
};

class Tree {
public:
    Tree();

    ~Tree();

    Node *SearchNode(int nodeIndex);

    bool AddNode(int nodeIndex, int direction, Node *pNode);

    bool DeleteNode(int nodeIndex, Node *pNode);

    void PreorderTraversal();

    void InorderTraversal();

    void PostorderTraversal();

private:
    Node *m_pRoot;
};


void test_main_tree();

#endif //DATASTRUCTURE_DEMOTREE_H
