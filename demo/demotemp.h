//
// Created by inc on 2018/12/28.
//

#ifndef DATASTRUCTURE_DEMOTEMP_H
#define DATASTRUCTURE_DEMOTEMP_H

#include "../hfiles/tools.h"

class MSInterface {
public:
    static MSInterface *getInstance() {
        MSInterface *msi = new MSInterface();
        if (msi == nullptr) {
            cout << "++++++++++++++msi初始化错误++++++++++++++++" << endl;
        }
        return msi;

    }

    void print() {
        cout << "=============" << *m_connec_count << endl;
    }

    void setParam(int f) {
        m_connec_count = &f;
    }

    ~MSInterface() {
        if (m_connec_count) {
            delete m_connec_count;
            m_connec_count = nullptr;

            cout << "--------------析构成功-------------" << endl;
        }
    }

private:
    static int msi_connect_count;
    int *m_connec_count;

    MSInterface() {}


};

#endif //DATASTRUCTURE_DEMOTEMP_H
