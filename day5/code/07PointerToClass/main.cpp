#include <iostream>

using namespace std;


#if 0

int a;
int * p = &a;
void func();
void (*pf)() = &func;

//ָ�����Ա��ָ��
//��    ���ݳ�Ա  ������Ա

 ��Ա���� ����::  *ָ����  = &����::��Ա��

 �������������ͣ�����::*����ָ�������������б� = &����::��Ա������

//����
.*  ->*
  ����.*���ݳ�Աָ��
  ����ָ��->*���ݳ�Աָ��

 (����.*��Ա����ָ��)()
 (����ָ��->*��Ա����ָ��)()

#endif



class Stu
{
public:
    Stu(string sn, int ia):
        name(sn),age(ia){}
    void print()
    {
        cout<<name<<"--"<<age<<endl;
    }

public:
    string name;
    int age;
};


int main()
{
    Stu  s1("zhaosi",39);
    Stu  s2("aobaniu",79);

    Stu * pp = new Stu("nigulasikaiqi.zhaosi",60);

    string Stu::*pn  =  &Stu::name;

    cout<<s1.name<<s2.name<<endl;
    cout<<s1.*pn<<s2.*pn<<endl;      //  .* ��һ��
    cout<<pp->*pn<<endl;




    void (Stu::*pf)() = &Stu::print;    //(*pf)();

    s1.print(); s2.print();
    (s1.*pf)();   (s2.*pf)();

    (pp->*pf)();   .*   ->*


    return 0;
}

