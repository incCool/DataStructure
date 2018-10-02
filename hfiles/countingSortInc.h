//
// Created by inc on 2018/10/2.
//

#ifndef DATASTRUCTURE_COUNTINGSORTINC_H
#define DATASTRUCTURE_COUNTINGSORTINC_H

#include <iostream>
#include <vector>

using namespace std;

class CountingSort {
public:
    int max, min;

    void maxAndMin(int *arr, int &max, int &min, int n);

    void generateBucket(vector<int> &vBucket, int *A, int n);

    int *countingSort(int *A, int n);

};

#endif //DATASTRUCTURE_COUNTINGSORTINC_H
