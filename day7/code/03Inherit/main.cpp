#include <iostream>

using namespace std;

#if 0

ѧ��  ������ ���䣬 �Ա� ѧ�ţ� �Է��� ѧϰ
��ʦ  ������ ���䣬 �Ա� ���ţ� �Է��� ��ѧ


              ������ ���䣬 �Ա𣬳Է�                           ����  ����
                                                                 �̳�  ����
ѧ��: ѧ�ţ� ѧϰ                        ���� ����ѧ ����ʦ      ����  ������;

#endif

// C++ ͨ���̳й�ϵ��ʵ���˴���Ŀ������ԡ�
class Human   //����   ����
{
public:
    void eat(string food)
    {
        cout<<" i am eating "<<food<<endl;
    }
};

//public �̳з�ʽ

//public ����Ȩ��

class Student:private Human  //���� ���ڸ���Ļ����������µĹ��ܣ� ���ֵ��Ǹ��ԡ�
{
public:
    void study(string course)
    {
        cout<<" i am a student , i am learning "<<course<<endl;
    }
};

class Teacher:public Human
{
public:
    void tech(string course)
    {
        cout<<" i am teacher , i am teaching "<<course<<endl;
    }
};

int main()
{
    Student  s;
    s.study("c++");
    s.eat("���˼��׷�");

    Teacher t;
    t.tech("java");
    t.eat("���̼�");

    return 0;
}

