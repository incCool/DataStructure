//
// Created by inc on 2018/10/15.
//把一个数组最开始的若干个元素搬到数组的末尾，
// 我们称之为数组的旋转。 输入一个非减排序的数组的一个旋转，输出旋转数组的最小元素。
// 例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
// NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。


#ifndef DATASTRUCTURE_ROTATEARRAY_H
#define DATASTRUCTURE_ROTATEARRAY_H

#include "../hfiles/tools.h"

class MinNumberInRotateArray {
public:
    int orderSearch(vector<int> &vect, int &left, int &right) {
        int minElem = vect[left];
        for (int i = left; i <= right; i++) {
            if (minElem > vect[i]) {
                minElem = vect[i];
                cout << "nihao" << endl;
            }
        }
        return minElem;
    }

    int minNumberInRotateArray(vector<int> rotateArray) {
        int size = rotateArray.size();
        if (size == 0)
            return 0;
        int left = 0, right = size - 1;
        int mid = 0;

        //如果是旋转数组,第一个元素大于或者等于最后一个元素
        while (rotateArray[left] >= rotateArray[right]) {
            //判断有两个元素的时候
            if (right - left == 1) {
                mid = right;
                break;
            }

            mid = (left + right) / 2;
            //在left和right之间搜索
            //1.如果rotateArray[left]、rotateArray[right]、rotateArray[mid]三者相等，那么只能顺序检索
            if (rotateArray[left] == rotateArray[right] && rotateArray[mid] == rotateArray[left])
                return orderSearch(rotateArray, left, right);
            //2.如果rotateArray[left] <= rotateArray[mid]，则left=mid, 否则 right=mid
            if (rotateArray[left] <= rotateArray[mid])
                left = mid;
            else
                right = mid;

        }
        return rotateArray[mid];
    }
};

int main_rotatearray() {
    MinNumberInRotateArray mn;

    vector<int> vect = {2, 2, 2, 2, 1, 2};

    cout << mn.minNumberInRotateArray(vect) << endl;

    return 0;
}

#endif //DATASTRUCTURE_ROTATEARRAY_H
