//
// Created by inc on 2018/11/6.
//
#include "phlsort.h"


//判断数组是否是二叉搜索树的后序遍历
bool Solution::VerifySquenceOfBST(vector<int> &sequence) {
    if (0 == sequence.size())
        return false;

    return isLastOrder(sequence, 0, sequence.size() - 1);
}

bool Solution::isLastOrder(vector<int> sequence, int m, int n) {
    if (m >= n)
        return true;
    int i = n;
    while (i > m && sequence[i - 1] > sequence[n]) --i;

    int j = i - 1;
    while (j >= m && sequence[j] < sequence[n]) --j;

    if (j > m)
        return false;

    return isLastOrder(sequence, m, i - 1) && isLastOrder(sequence, i, n - 1);
}
