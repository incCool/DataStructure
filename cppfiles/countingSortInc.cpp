//
// Created by inc on 2018/10/2.
//
#include "../hfiles/countingSortInc.h"

void CountingSort::maxAndMin(int *arr, int &max, int &min, int n) {
    max = arr[0];
    min = arr[0];

    for (int i = 1; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
}

void CountingSort::generateBucket(vector<int> &vBucket, int *A, int n) {
    vBucket.clear();
    for (int i = 0; i < n; i++) {
        vBucket[A[i] - min]++;
    }
}

int *CountingSort::countingSort(int *A, int n) {
    // write code here
    if (n < 1)
        return A;

    //求最大值和最小值
    maxAndMin(A, max, min, n);
    int len = max - min + 1;
    //初始化桶
    vector<int> vBucket(len, 0);

    generateBucket(vBucket, A, n);

    //计数排序
    int num = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < vBucket[i]; j++) {
            A[num] = i + min;
            num++;
        }
    }
    return A;
}