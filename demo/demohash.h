//
// Created by inc on 2018/12/12.
//

#ifndef DATASTRUCTURE_DEMOHASH_H
#define DATASTRUCTURE_DEMOHASH_H

#include "../hfiles/tools.h"

class HashFunc {
public:
    HashFunc(const vector<string> &vstr) : vStr(vstr) {}

    int32_t hashCode(const string &str) const;

    void print() const;

private:
    vector<string> vStr;
};


#endif //DATASTRUCTURE_DEMOHASH_H
