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