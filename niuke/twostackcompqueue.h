//
// Created by inc on 2018/10/15.
//

#ifndef DATASTRUCTURE_TWOSTACKCOMPQUEUE_H
#define DATASTRUCTURE_TWOSTACKCOMPQUEUE_H

#include <iostream>
#include <stack>

using namespace std;

class TwoStackCompQueue {
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int tmp;
        if (stack2.empty()) {
            while (!stack1.empty()) {
                tmp = stack1.top();
                stack2.push(tmp);
                stack1.pop();
            }
        }
        tmp = stack2.top();
        stack2.pop();
        return tmp;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};

int main_TwoStackCompQueue() {
    TwoStackCompQueue t;
    for (int i = 0; i < 5; i++)
        t.push(i);
    for (int i = 0; i < 5; i++)
        cout << t.pop() << endl;
    return 0;
}

#endif //DATASTRUCTURE_TWOSTACKCOMPQUEUE_H
