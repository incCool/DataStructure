//
// Created by inc on 2018/10/16.
//

#ifndef DATASTRUCTURE_NUMREVERSE_H
#define DATASTRUCTURE_NUMREVERSE_H

#include "../hfiles/tools.h"

int main_numreverse() {
    vector<char> vect;
    string str;
    while (getline(cin, str)) {
        if (str.size() == 1) {
            cout << atoi(str.c_str()) << endl;
        } else {
            int strSize = str.size();
            for (int i = 0; i < strSize; i++) {
                vect.push_back(str[i]);
            }
            string tempstr = "";

            for (int i = strSize - 1; i > 0; i--) {
                if (vect[i] != '0') {
                    break;
                }
                vect.pop_back();
            }
            int s = vect.size() - 1;

            for (int i = s; i >= 1; i--) {
                tempstr += vect[i];

            }
            if (vect[0] == '-') {
                tempstr = '-' + tempstr;
            }
            tempstr = tempstr + vect[0];
            int result = atoi(tempstr.c_str());
            cout << result << endl;
        }

    }

    return 0;
}

#endif //DATASTRUCTURE_NUMREVERSE_H
