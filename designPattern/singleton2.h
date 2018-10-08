//
// Created by inc on 2018/10/8.
// ����ģʽ
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
        cout << "���캯��Singelton ... do" << endl;
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

Singelton2 *Singelton2::m_singer = new Singelton2; //�����㴴��������ʵ��������ʵ��new����
int Singelton2::m_count = 0;

void main2_2() {
    cout << "��ʾ ����ʽ" << endl;

    Singelton2 *p1 = Singelton2::getInstance(); //ֻ����ʹ�õ�ʱ�򣬲�ȥ��������
    Singelton2 *p2 = Singelton2::getInstance();
    if (p1 != p2) {
        cout << "����ͬһ������" << endl;
    } else {
        cout << "��ͬһ������" << endl;
    }
    p1->printT();
    p2->printT();
    Singelton2::FreeInstance();
    Singelton2::FreeInstance();

}


#endif //DATASTRUCTURE_SINGLETON2_H
