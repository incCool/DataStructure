//
// Created by inc on 2018/10/8.
//

#ifndef DATASTRUCTURE_HEAPSORT_H
#define DATASTRUCTURE_HEAPSORT_H

#include <iostream>

using namespace std;

class HeapSortC {
public:
    void swap(int *A, int p, int q) {
        int temp = A[p];
        A[p] = A[q];
        A[q] = temp;
    }

    void HeapAdjust(int *A, int s, int n) {
        int temp = A[s];

        for (int i = 2 * s + 1; i <= n; i = 2 * i + 1) {
            if (i < n && A[i] < A[i + 1]) {
                i++;
            }
            if (temp > A[i]) {
                break;
            }
            A[s] = A[i];
            s = i;
        }
        A[s] = temp;
    }

    //下标从0开始
    int *heapSort(int *A, int n) {
        // write code here
        int m = n;
        for (int i = m / 2 - 1; i >= 0; i--) {
            HeapAdjust(A, i, m - 1);
        }
        for (int i = 0; i < n; i++)
            cout << A[i] << " " << endl;
        for (int i = m - 1; i > 0; i--) {
            swap(A, 0, i);
            HeapAdjust(A, 0, i - 1);
        }
        return A;
    }
};
void swap(int *a, int p, int q) {
    swap(a[p], a[q]);
}

void HeapAdjust(int *a, int s, int n) {
    int i;
    int temp = a[s];
    for (i = 2 * s; i <= n; i = 2 * i) {
        if (i < n && a[i] < a[i + 1]) {
            i++;
        }

        if (temp > a[i]) {
            break;
        }
        a[s] = a[i];
        s = i;
    }
    a[s] = temp;

}

//下标从1开始
void HeapSort(int *a, int n) {
    int i;
    //先建立最大堆，数组看成是完全二叉树，i节点的孩子2i 和 2i+1 ,进行调整
    for (i = n / 2; i > 0; i--) {
        HeapAdjust(a, i, n);
    }
    //把堆根节点与最后元素交换，然后调整堆
    for (i = n; i > 1; i--) {
        swap(a, 1, i);
        HeapAdjust(a, 1, i - 1);
    }
}

int main_heapsort() {
    int i, a[10] = {-1, 5, 2, 6, 0, 3, 9, 1, 7, 4};
    HeapSort(a, 9);

    cout << "排序后的结果是：" << endl;
    for (i = 1; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int b[9] = {5, 2, 6, 0, 3, 9, 1, 7, 4};
    HeapSortC hs;
    hs.heapSort(b, 9);
    cout << "排序后的结果是：" << endl;
    for (i = 0; i < 9; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}

#endif //DATASTRUCTURE_HEAPSORT_H
