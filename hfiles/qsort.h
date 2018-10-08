//
// Created by inc on 2018/10/7.
//

#ifndef DATASTRUCTURE_QSORT_H
#define DATASTRUCTURE_QSORT_H

#include <iostream>

using namespace std;

class QuickSort {
public:
    void swap(int *A, int i, int j) {
        int tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
    }

    int partion(int *A, int low, int high) {
        int pv = 0;
        pv = A[low];
        while (low < high) {
            while ((low < high) && (A[high] >= pv))
                high--;
            swap(A, high, low);
            while ((low < high) && A[low] <= pv)
                low++;
            swap(A, low, high);
        }
        return low;
    }

    void QSort(int *A, int low, int high) {
        int pvIndex = 0;
        if (low >= high) {
            return;
        }
        //1.partion
        pvIndex = partion(A, low, high);

        QSort(A, low, pvIndex - 1);
        QSort(A, pvIndex + 1, high);

    }

    int *quickSort(int *A, int n) {
        // write code here
        QSort(A, 0, n - 1);
        return A;
    }
};

void mainqsort() {
    int a[] = {1, 2, 2, 5, 3, 3};
    int *p = a;
    QuickSort qt;
    qt.quickSort(p, 6);

    for (int i = 0; i < 6; i++) {
        cout << p[i] << ' ';
    }
    cout << endl;
    swap(p[2], p[4]);
    for (int i = 0; i < 6; i++) {
        cout << p[i] << ' ';
    }
}

#endif //DATASTRUCTURE_QSORT_H
