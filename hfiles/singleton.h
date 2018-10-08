//
// Created by inc on 2018/10/8.
//

#ifndef DATASTRUCTURE_SINGLETON_H
#define DATASTRUCTURE_SINGLETON_H

#include <iostream>

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

private:
    static Singelton *m_singer;
    static int m_count;
};

Singelton *Singelton::m_singer = NULL;  //����ʽ ��û�д�����������
int Singelton::m_count = 0;


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


    return;
}

#endif //DATASTRUCTURE_SINGLETON_H
