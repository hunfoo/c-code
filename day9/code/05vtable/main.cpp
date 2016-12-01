#include <iostream>

using namespace std;

class Base
{
public:
     virtual void f(){cout<<"Base::f()"<<endl;}
     virtual void g(){cout<<"Base::g()"<<endl;}
     virtual void h(){cout<<"Base::h()"<<endl;}

private:
     int a;
};

typedef void (*Pfunc)(void);

int main()
{
    Base b;
    cout<<sizeof(Base)<<endl;
    cout<<sizeof(b)<<endl;

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



    return 0;
}

