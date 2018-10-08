//
// Created by inc on 2018/10/8.
//

#ifndef DATASTRUCTURE_HEAPSORT_H
#define DATASTRUCTURE_HEAPSORT_H

#include <iostream>

using namespace std;

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
    return 0;
}

#endif //DATASTRUCTURE_HEAPSORT_H
