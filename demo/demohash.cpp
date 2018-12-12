//
// Created by inc on 2018/12/12.
//

#include "demohash.h"
#include "strings.h"

int32_t HashFunc::hashCode(const string &str) const {
    int32_t h = 0;

    if (h == 0 && str.size() > 0) {
        for (int i = 0; i < str.size(); ++i) {
            h = 31 * h + str.at(i);
        }
    }
    return h;
}

void HashFunc::print() const {
    for (int i = 0; i < vStr.size(); ++i) {
        cout << vStr[i] << "HashCode value :" << hashCode(vStr[i]) << endl;
    }


}