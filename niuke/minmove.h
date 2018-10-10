//
// Created by inc on 2018/10/10.
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
