#include <iostream>
#include "date.h"

using namespace std;

//Ȩ�޿���         private  protected  public
//���ݺ���Ϊ��һ��
//���ڿ������ݣ��߼�����   �����ṩ�ӿ�
//��   �����  ���󣬵�����Ϊ�������

// ������ʵ��Ҫ�ֿ�

using namespace Space;


int main()
{
    Date d;
    d.init();
    d.print();


    if(d.isLeapYear())
        cout<<d.getYear()<<" is leap year"<<endl;
    else
        cout<<d.getYear()<<" is not leap year"<<endl;


    return 0;
}

