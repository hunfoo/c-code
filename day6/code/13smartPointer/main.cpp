#include <iostream>
#include <memory>

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

    void func()
    {
        cout<<"alsdjflaksdflasd"<<endl;
    }

};

//new A �� ptr�й��Ժ� ����Ҫ�ٹ���delete�����⡣delete ��ptr �뿪��ջ�ռ��ʱ������
//�������Ϊ������һ��ָ�롣()  ->  *

class Smt
{
public:
    Smt(A* p)
    {
        ptr = p;
    }

    ~Smt()
    {
        delete ptr;
    }

    A* operator->()
    {
        return ptr;
    }

    A& operator*()
    {
        return *ptr;
    }

private:
    A * ptr;

};

void foo()
{
//    auto_ptr<A>  ptr(new A);   // auto_ptr��ģ��   auto_ptr<A> ģ����

//    ptr->func();
//    (*ptr).func();

    Smt  smt(new A);
//    smt.ptr->func();
//    (*smt.ptr).func();
    smt->func();   smt->func();      // a.operator+();   a +;
    (*smt).func();  (*smt).func();

}

int main()
{
    foo();
    return 0;
}

