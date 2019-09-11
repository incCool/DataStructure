#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <scoped_allocator>
#include <set>
#include <time.h>
#include "stdlib.h"
//#include "demo/demotemp.h"
//#include "demo/test.h"
//#include "demo/learnfunpointer.h"
#include "tree/demotree.h"

using namespace std;


int main(int argc, char *argv[]) {

    Tree *t = new Tree();
    Node *node1 = new Node();
    node1->index = 1;
    node1->data = 5;

    Node *node2 = new Node();
    node2->index = 2;
    node2->data = 8;

    Node *node3 = new Node();
    node3->index = 3;
    node3->data = 2;

    Node *node4 = new Node();
    node4->index = 4;
    node4->data = 6;

    Node *node5 = new Node();
    node5->index = 5;
    node5->data = 9;

    Node *node6 = new Node();
    node6->index = 6;
    node6->data = 7;

    t->AddNode(0, 0, node1);
    t->AddNode(0, 1, node2);

    t->AddNode(1, 0, node3);
    t->AddNode(1, 1, node4);

    t->AddNode(2, 0, node5);
    t->AddNode(2, 1, node6);

    //t->PreorderTraversal();

    t->InorderTraversal();

    t->DeleteNode(2, nullptr);
    cout << endl;
    cout << "Inorder:" << endl;
    t->InorderTraversal();

    delete t;
    return 0;
}


