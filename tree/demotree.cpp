//
// Created by inc on 2019/9/11.
//

#include "demotree.h"

Node::Node() {
    index = 0;
    data = 0;
    pLChild = nullptr;
    pRChild = nullptr;
    pParent = nullptr;
}

Tree::Tree() {
    m_pRoot = new Node();
}

Tree::~Tree() {
    DeleteNode(0, nullptr);
}

Node *Node::SearchNode(int nodeIndex) {
    if (this->index == nodeIndex) {
        return this;
    }
    Node *tNode = NULL;
    if (this->pLChild != nullptr) {
        if (this->pLChild->index == nodeIndex) {
            return this->pLChild;
        } else {
            tNode = this->pLChild->SearchNode(nodeIndex);
            if (tNode != nullptr)
                return tNode;
        }

    }

    if (this->pRChild != nullptr) {
        if (this->pRChild->index == nodeIndex) {
            return this->pRChild;
        } else {
            tNode = this->pRChild->SearchNode(nodeIndex);
            return tNode;
        }
    }

    return nullptr;
}

void Node::DeleteNode() {
    if (this->pLChild != nullptr) {
        this->pLChild->DeleteNode();
    }

    if (this->pRChild != nullptr) {
        this->pRChild->DeleteNode();
    }
    if (this->pParent != nullptr) {
        if (this->pParent->pLChild == this) {
            this->pParent->pLChild = nullptr;
        }
        if (this->pParent->pRChild == this) {
            this->pParent->pRChild = nullptr;
        }
    }

    delete this;
}

void Node::PreorderTraversal() {
    cout << this->index << "   " << this->data << endl;

    if (this->pLChild != nullptr) {
        this->pLChild->PreorderTraversal();
    }
    if (this->pRChild != nullptr) {
        this->pRChild->PreorderTraversal();
    }
}

void Node::PostorderTraversal() {

    if (this->pLChild != nullptr) {
        this->pLChild->PostorderTraversal();
    }
    if (this->pRChild != nullptr) {
        this->pRChild->PostorderTraversal();
    }
    cout << this->index << "   " << this->data << endl;

}


void Node::InorderTraversal() {
    if (this->pLChild != nullptr) {
        this->pLChild->InorderTraversal();
    }

    cout << this->index << "   " << this->data << endl;

    if (this->pRChild != nullptr) {
        this->pRChild->InorderTraversal();
    }
}

Node *Tree::SearchNode(int nodeIndex) {
    return m_pRoot->SearchNode(nodeIndex);
}

bool Tree::DeleteNode(int nodeIndex, Node *pNode) {
    Node *temp = SearchNode(nodeIndex);
    if (temp == nullptr)
        return false;

    if (pNode != nullptr)
        pNode->data = temp->data;

    temp->DeleteNode();
}


bool Tree::AddNode(int nodeIndex, int direction, Node *pNode) {
    Node *temp = SearchNode(nodeIndex);
    if (temp == nullptr)
        return false;

    Node *node = new Node();

    node->index = pNode->index;
    node->data = pNode->data;
    node->pParent = temp;

    if (direction == 0) {
        temp->pLChild = node;
    }

    if (direction == 1) {
        temp->pRChild = node;
    }
    return true;
}

void Tree::PostorderTraversal() {
    m_pRoot->PostorderTraversal();
}

void Tree::PreorderTraversal() {
    m_pRoot->PreorderTraversal();
}

void Tree::InorderTraversal() {
    m_pRoot->InorderTraversal();
}

void test_main_tree() {
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
}