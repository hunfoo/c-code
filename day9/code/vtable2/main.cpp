#include <iostream>

using namespace std;

class Base
{
public:
     virtual void f(){cout<<"Base::f()"<<endl;}
     virtual void g(){cout<<"Base::g()"<<endl;}
     virtual void h(){cout<<"Base::h()"<<endl;}
};

class Derive:public Base
{
public:
    virtual void f(){cout<<"Derive::f()"<<endl;}
    virtual void g1(){cout<<"Derive::g1()"<<endl;}
    virtual void h1(){cout<<"Derive::h1()"<<endl;}

    void func()
    {
        cout<<"askdfjalsdf"<<endl;
    }
};
typedef void (*Pfunc)(void);

int main()
{
#if 0
    Derive b;

    cout<<"����b����ʼ��ַ:"<<&b<<endl;
    cout<<"vtable����ʼ��ַ:"<<(int**)*(int*)(&b)<<endl;
    cout<<"vtable�е�0�������ĵ�ַ:"<<*((int**)*(int*)(&b)+0)<<endl;
    cout<<"vtable�е�1�������ĵ�ַ:"<<*((int**)*(int*)(&b)+1)<<endl;
    cout<<"vtable�е�2�������ĵ�ַ:"<<*((int**)*(int*)(&b)+2)<<endl;
    cout<<"vtable�е�3�������ĵ�ַ:"<<*((int**)*(int*)(&b)+3)<<endl;



    Pfunc  pf = (Pfunc)*((int**)*(int*)(&b)+0);
    pf();
    pf = (Pfunc)*((int**)*(int*)(&b)+1);
    pf();
    pf = (Pfunc)*((int**)*(int*)(&b)+2);
    pf();
    pf = (Pfunc)*((int**)*(int*)(&b)+3);
    pf();
    pf = (Pfunc)*((int**)*(int*)(&b)+4);
    pf();
    pf = (Pfunc)*((int**)*(int*)(&b)+5);
    pf();
    pf = (Pfunc)*((int**)*(int*)(&b)+6);
    pf();

#endif

    Derive d;
    d.f();
    Base *p = &d;
    p->func();
    p->f();


    return 0;
}

