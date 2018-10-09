//
// Created by inc on 2018/10/9.
//

#ifndef DATASTRUCTURE_INSERTSORT_H
#define DATASTRUCTURE_INSERTSORT_H

#include <iostream>

using namespace std;

void insertSort(int k[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        if (k[i] < k[i - 1]) {
            temp = k[i];
            for (j = i - 1; k[j] > temp; j--) {
                k[j + 1] = k[j];
            }
            k[j + 1] = temp;
        }
    }
}

void shellSort(int *A, int n) {
    int gap = n, tmp;
    int i, j;
    do {
        gap = gap / 3 + 1;
        for (i = gap; i < n; i++) {
            //cout<<"gap:"<<i<<"->"<<A[i]<<endl;
            if (A[i] < A[i - gap]) {
                tmp = A[i];
                cout << i << ":" << tmp << endl;
                for (j = i - gap; A[j] > tmp; j -= gap) {
                    A[j + gap] = A[j];
                }
                A[j + gap] = tmp;
            }
        }
    } while (gap > 1);
}


int mainInsertSort() {

    int a[] = {1, 2, 2, 5, 3, 3, 7, 90, 6, 5, 0, 6, 3};
    int *p = a;
    //insertSort(p,13);
    for (int i = 0; i < 13; i++) {
        cout << p[i] << ' ';
    }
    cout << "shell sort" << endl;
    shellSort(p, 13);
    for (int i = 0; i < 13; i++) {
        cout << p[i] << " ";
    }
}

#endif //DATASTRUCTURE_INSERTSORT_H
