//
// Created by inc on 2018/10/8.
// 饿汉模式
//

#ifndef DATASTRUCTURE_SINGLETON2_H
#define DATASTRUCTURE_SINGLETON2_H

#include <iostream>
#include <windows.h>

using namespace std;

class Singelton2 {
private:
    Singelton2() {
        m_singer = NULL;
        m_count = 0;
        cout << "构造函数Singelton ... do" << endl;
    }

public:
    static Singelton2 *getInstance() {
// 		if (m_singer == NULL )
// 		{
// 			m_singer = new Singelton2;
// 		}
        return m_singer;
    }

    static void FreeInstance() {
        if (m_singer != NULL) {
            delete m_singer;
            m_singer = NULL;
            m_count = 0;
        }
    }

    static void printT() {
        cout << "m_count: " << m_count << endl;
    }

private:
    static Singelton2 *m_singer;
    static int m_count;
};

Singelton2 *Singelton2::m_singer = new Singelton2; //不管你创建不创建实例，均把实例new出来
int Singelton2::m_count = 0;

void main2_2() {
    cout << "演示 饿汉式" << endl;

    Singelton2 *p1 = Singelton2::getInstance(); //只有在使用的时候，才去创建对象。
    Singelton2 *p2 = Singelton2::getInstance();
    if (p1 != p2) {
        cout << "不是同一个对象" << endl;
    } else {
        cout << "是同一个对象" << endl;
    }
    p1->printT();
    p2->printT();
    Singelton2::FreeInstance();
    Singelton2::FreeInstance();

}


#endif //DATASTRUCTURE_SINGLETON2_H
