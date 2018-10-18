//
// Created by inc on 2018/10/18.
//

#include "../niuke/niukwjianzhioffer.h"

//计算整数用二进制表示时候1的数量
int NiuKeSolution::NumberOf1(int n) const {
    int count = 0;
    unsigned int flag = 1;
    while (flag) {
        if (n & flag) {
            count++;
        }
        flag = flag << 1;
        cout << "flag:" << flag << endl;
    }
    return count;
}

//直接插入法
void NiuKeSolution::insertSort(int k[], int n) {
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


//希尔排序
void NiuKeSolution::shellSort(int *A, int n) {
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

//测试直接插入与希尔排序
int NiuKeSolution::mainInsertSort() {

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