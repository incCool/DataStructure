//
// Created by inc on 2019/8/21.
//

#ifndef DATASTRUCTURE_KILLFACE_H
#define DATASTRUCTURE_KILLFACE_H

/**
 * kill coding
 */
#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

//字符串中的空格替换为%20
void replaceSpace(char str[], int length) {
    if (str[0] == '\0' || length <= 0) {
        cout << "null!" << endl;
        return;
    }
    int len = sizeof(&str);
    cout << "length:" << len << endl;

    int originStringLen = 0;
    int blankLen = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            blankLen++;
        }

        originStringLen++;
        i++;
    }//O(n)

    cout << "blank:" << blankLen << endl;
    cout << "origin:" << originStringLen << endl;

    int newLen = originStringLen + blankLen * 2;

    if (newLen > length)
        return;

    int originOfOriginindex = originStringLen;
    int indexOfNew = newLen;

    while (originOfOriginindex >= 0 && indexOfNew > originOfOriginindex) {
        if (str[originOfOriginindex] == ' ') {
            str[indexOfNew--] = '0';
            str[indexOfNew--] = '2';
            str[indexOfNew--] = '%';
            originOfOriginindex--;
        } else {
            str[indexOfNew--] = str[originOfOriginindex--];
        }
    }

    cout << str << endl;
}

//字符串转为数字
long strToNumber(const string &str) {
    string y = str;
    if ("" == y) {
        y = "0";
    }
    return atol(str.c_str());
}

long str2Num(string &str) {
    stringstream os;;

    long num = 0;

    os << str;
    os >> num;
    cout << num << endl;
    return num;


}

#endif //DATASTRUCTURE_KILLFACE_H
