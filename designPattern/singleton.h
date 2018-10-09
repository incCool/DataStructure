//
// Created by inc on 2018/10/8.
//

#ifndef DATASTRUCTURE_SINGLETON_H
#define DATASTRUCTURE_SINGLETON_H

#include <iostream>
#include <process.h>
#include <windows.h>
#include <winbase.h>
using namespace std;

//����ʽ
class Singelton {

private:
    Singelton() {
        m_singer = NULL;
        m_count = 0;
        cout << "���캯��Singelton ... do" << endl;
    }

public:
    static Singelton *getInstance() {
        if (m_singer == NULL)  //����ʽ��1 ÿ�λ�ȡʵ����Ҫ�ж� 2 ���̻߳�������
        {
            m_singer = new Singelton;
        }
        return m_singer;
    }

    static void printT() {
        cout << "m_count: " << m_count << endl;
    }

    static void FreeSingleton() {
        if (m_singer != NULL) {
            cout << "FreeSingleton..." << endl;
            delete m_singer;
            m_singer = NULL;
        }
    }
private:
    static Singelton *m_singer;
    static int m_count;
};

Singelton *Singelton::m_singer = NULL;  //����ʽ ��û�д�����������
int Singelton::m_count = 0;

unsigned threadfunc(void *mylpAdd) {
    int id = GetCurrentThreadId();
    cout << "ThreadFunc id : " << endl;
    Singelton::getInstance()->printT();
    return 1;
}

void main01_1() {
    cout << "��ʾ ����ʽ" << endl;
    Singelton *p1 = Singelton::getInstance(); //ֻ����ʹ�õ�ʱ�򣬲�ȥ��������
    Singelton *p2 = Singelton::getInstance();
    if (p1 != p2) {
        cout << "����ͬһ������" << endl;
    } else {
        cout << "��ͬһ������" << endl;
    }
    p1->printT();
    p2->printT();

    cout << GetCurrentThreadId() << endl;
    Singelton::FreeSingleton();

    return;
}

#endif //DATASTRUCTURE_SINGLETON_H
