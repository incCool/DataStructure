//
// Created by inc on 2018/10/18.
//

#ifndef DATASTRUCTURE_NIUKWJIANZHIOFFER_H
#define DATASTRUCTURE_NIUKWJIANZHIOFFER_H

#include "../hfiles/tools.h"

class NiuKeSolution {
public:
    //输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。
    int NumberOf1(int n) const;

    //直接插入排序
    void insertSort(int k[], int n);

    //希尔排序
    void shellSort(int *A, int n);

    //测试直接插入和希尔排序
    int mainInsertSort();


};

#endif //DATASTRUCTURE_NIUKWJIANZHIOFFER_H
