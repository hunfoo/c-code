
#include <iostream>

using namespace std;


class A
{
public:
    A()
    {
        cout<<"A()"<<endl;
    }
    ~A()
    {
        cout<<"~A()"<<endl;
    }

};

class Base
{
public:
    Base()
    {
        cout<<"Base()"<<endl;
        p = new char[100];
    }
    ~Base()
    {
        cout<<"~Base()"<<endl;
        delete p;
    }

private:
    char *p;
};

class Derive:public Base
{
public:
    Derive()
    {
        cout<<"Derive()"<<endl;
        q = new char[200];
    }
    ~Derive()
    {
        cout<<"~Derive()"<<endl;
        delete q;
    }
private:
    char *q;
};

int main()
{
    Derive d;
    return 0;
}

#if 0
overload����  ͬһ�������� ��������ͬ�������б�ͬ(���������ͣ�˳��)  ϣ������
shadow        �������У�ֻҪ������ͬ�����ɹ���shadow                  ��ϣ������

#endif

