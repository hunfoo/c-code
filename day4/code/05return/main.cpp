#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout<<this<<" constructor"<<endl;
    }
    ~A()
    {
        cout<<this<<" destructor"<<endl;
    }

    A(const A & another)
    {
        cout<<this<<" cpy constructor from "<<&another<<endl;
    }

    A & operator=(const A & another)
    {
        cout<<this<<" operator= "<<&another<<endl;
    }
};

//�������췢����ʱ����
//1,�����¶��� A a ; A b= a;
//2,���λ򷵻ض���

//������ͨ������˵��������Ч�������ԡ�
//�����������ԣ�������Ч�ʺܸߡ�
//�����õȼ��ڣ�������ԭ�����������


//ջ�ϵĶ����ǿ��Է��صģ������ܷ���ջ�ϵ����� (���Ƕ�����)




#if 0
A func(A &a)
{
    return a;
}


int main()
{
    A  x;

    A  t;

    t = func(x);
    cout<<"&t "<<&t<<endl;

    return 0;
}

#endif


A& func()
{
    A b;
    return b;
}


int main()
{
    A t ;
    t = func();
    cout<<"&t "<<&t<<endl;

    return 0;
}

