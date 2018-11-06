//
// Created by inc on 2018/11/5.
//

#ifndef DATASTRUCTURE_PARAMBASE_H
#define DATASTRUCTURE_PARAMBASE_H

#include "../hfiles/tools.h"

class CommPara {
public:
    int m_num;
    string m_str;
};

class ParamBase {
public:
    ParamBase();

    bool is_matched;

    string getParamCode();

    bool matchParam(string eparchyCode, string provinceCode);

protected:
    string m_paramCode;

    virtual void setParam(CommPara &para);
};

#endif //DATASTRUCTURE_PARAMBASE_H
