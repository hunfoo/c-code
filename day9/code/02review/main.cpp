#include <iostream>

using namespace std;

//virtual ����ˣ��������������ͬ��Ա(���ݳ�Ա�ͳ�Ա����)�����������γ����ࡣ�����ʴ����˲��㡣
//����ุ���У���ȡ����ʽ������ͬ�����Ա�ᵽ�游����ȥ���ֱ������̳��ԣ��游�ࡣȻ����������
//�̳��Ը��࣬��ʱ����������������Ϣ�������෽�㡣

class M
{
public:
    M(int m):a(m){}
protected:
    int a;
};



class A:virtual public M
{
public:
    A(int i):M(i){}

};
class B:virtual public M
{
public:
    B(int j):M(j){}

};
class C:public A, public B
{
public:
    C(int m ):A(m),B(m),M(m){}
    void func()
    {
        cout<<a<<endl;
    }
};

int main()
{
    C c(100);
    c.func();
    return 0;
}

