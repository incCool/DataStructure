//
// Created by inc on 2018/11/6.
//1.输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。
//

#ifndef DATASTRUCTURE_PHLSORT_H
#define DATASTRUCTURE_PHLSORT_H

#include "../hfiles/tools.h"

class Solution {
public:
    bool VerifySquenceOfBST(vector<int> &);

    bool isLastOrder(vector<int>, int, int);
};

#endif //DATASTRUCTURE_PHLSORT_H
