#include <iostream>
#include "student.h"
#include "graduate.h"
#include "doctor.h"

using namespace std;

#if 1
//����������б��䣬���ػ�Ĭ�ϣ���Ĭ�ϰ�������
//�����п��Բ�����ʾ�ĵ��ø���Ĺ�����


//����ֻ��Ը��ฺ�𣬲���Ҫ�Ը���ĸ��ฺ��
//����ĸ��࣬�ɸ��ฺ��


//���е��Ӷ���ĳ�ʼ��  int age; float salary

//��ʼ��˳��  �����ʼ����������ʼ��  ����ĳ�ʼ��


class A
{
public:
    A(){cout<<"a"<<endl;}
};

class Father
{
public:
    Father(int i){
        cout<<"Father"<<endl;
    }

};
class Son:public Father
{
public:
    Son(int j):Father(j){
        cout<<"Son"<<endl;
    }
};

class GradSon:public Son
{
public:
    GradSon(int k):Son(k){
        cout<<"GradSon"<<endl;
    }

    A a;
};


#endif

int main()
{
    Student s("zhaosi",32,120);
    s.dis();
    cout<<"--------------------"<<endl;

    Graduate g("nengge",35,150,2000,1999,9,9);
    g.print();
    g.getBirthday();

    cout<<"--------------------"<<endl;
    Doctor  d("bigHead",23,200,20000,1999,9,9,"doctor,liu");

    d.dump();


    GradSon gs(2);




    return 0;
}

