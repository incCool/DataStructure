//
// Created by inc on 2018/10/10.
// leetcode 45:
// Given an array of non-negative integers, you are initially positioned at the first index of the array.
//
//Each element in the array represents your maximum jump length at that position.
//
//Your goal is to reach the last index in the minimum number of jumps.
//
//Example:
//
//Input: [2,3,1,1,4]
//Output: 2
//Explanation: The minimum number of jumps to reach the last index is 2.
//    Jump 1 step from index 0 to 1, then 3 steps to the last index.
//

#ifndef DATASTRUCTURE_MINMOVE_H
#define DATASTRUCTURE_MINMOVE_H

#include <iostream>
#include <vector>

using namespace std;

vector<int> minMove(vector<int> vect) {
    vector<int> result;
    int vsize = vect.size(), len = vsize - 1;
    if (vsize < 2) {
        result.push_back(1);
        return result;
    }
    int j;
    int maxNum = vect[0];
    if (maxNum >= len) {
        result.push_back(len);
        return result;
    }

    int indexOfMaxNum;
    for (int i = 0; i < vsize; i = i + indexOfMaxNum) {
        maxNum = 0;
        indexOfMaxNum = 0;
        for (j = 0; j < vsize && j <= vect[i]; j++) {
            //j+i : 当前位置 ，vect[j+i]:代表当前位置元素， vect[j+i]+j+i:表示当前位置所能到达的位置
            if ((vect[j + i] + j + i < len) && maxNum < vect[j + i] + j + i) {
                maxNum = vect[j + i] + j + i;
                indexOfMaxNum = j + i;
            } else if (vect[j + i] + j + i >= len) {
                result.push_back(j);
                result.push_back(len - j - i);
                return result;
            }
        }
        //cout<<indexOfMaxNum-i<<endl;
        result.push_back(indexOfMaxNum - i);
    }

    return result;
}

int minStep(vector<int> vect) {
    int vsize = vect.size();
    int last = 0;//上一次能达到的位置
    int step = 0;//i需要超过上一步最远位置时加1
    int reach = 0;//全局最远可达位置

    for (int i = 0; i <= reach && i < vsize; i++) {
        if (i > last) {
            step++;
            last = reach;
        }
        reach = max(reach, vect[i] + i);
    }
    return reach >= (vsize - 1) ? step : 0;
}

int main_minmove() {
    vector<int> vect;
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(1);
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(1);
    vect.push_back(1);
    //cout<<minStep(vect);

    vector<int> result;
    result = minMove(vect);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return 0;

}

#endif //DATASTRUCTURE_MINMOVE_H
