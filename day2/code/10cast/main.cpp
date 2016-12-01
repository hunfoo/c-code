#include <iostream>
#include <stdlib.h>

#if 0
static_cast   ������ʽ���Ϳ���ת���ģ������ô����͡�
reinterpret_cast ��������ʽ������ת����static_cast �������á�
const_cast   �ѳ�
dynamic_cast
#endif

using namespace std;

int main1()
{
    float a = 5.6;
    int b = 5;
    b = static_cast<int>(a);
    a = static_cast<float>(b);


    void *p ;int *q;
    p = q;
    q = static_cast<int*>(p);

    int x = 10;
    int y = 3;

    float z = static_cast<float>(x)/y;
    cout<<z<<endl;
    char * pc = static_cast<char*>(malloc(100));


    return 0;
}


int main2()
{
//    char * p; int * q;
//    p = reinterpret_cast<char*>(q);

    int a[5] = {1,2,3,4,5};

    int *p =(int*)(int(a)+1) ;//reinterpret_cast<int*>((reinterpret_cast<int>(a)+1));

    cout<<hex<<*p<<endl;

    return 0;
}

void func(const int & v)  //const �����õ�һ����չ
{
}


void func2(int & v)
{
    cout<<v<<endl;
}

int main()
{
    //const һ�������Ըġ�
    //const_cast ֻ��Ӧ����ָ�����á�
    const int a = 19;

    func(10);
    func2(const_cast<int&>(a));

    int & ra = const_cast<int&>(a);
    ra = 200;

    cout<<"a = "<<a<<"ra = "<<ra<<endl;
    cout<<"&a = "<<&a<<"&ra = "<<&ra<<endl;


    int * pi  = const_cast<int*>(&a);

    *pi = 200;
    cout<<"a = "<<a<<"*pi = "<<*pi<<endl;
    cout<<"&a = "<<&a<<"pi  = "<<pi<<endl;


    struct A
    {
        int data;
    };

    const A  ad={10};

    A * pA = const_cast<A *>(&ad);
    pA->data = 200;

    cout<<pA->data<<endl;



    return 0;
}

