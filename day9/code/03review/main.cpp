#include <iostream>
using namespace std;

#if 0
1,���������麯����
2,�����и�д(override)������麯����
3,�������ĵ�ַ�����˸����ָ�룬���ܹ���ָ�����麯����
#endif


class A
{
public:
    A()
    {
        cout<<"A()"<<endl;
    }
    virtual ~A()
    {
        cout<<"~A()"<<endl;
    }

    virtual void func() = 0;

};
class B:public A
{
public:
    void func()
    {
        cout<<"class B"<<endl;
    }
    B()
    {
        cout<<"B()"<<endl;
    }
    ~B()
    {
        cout<<"~B()"<<endl;
    }

};


int main()
{
    A *pa =  new B;

    delete pa;
    return 0;
}

