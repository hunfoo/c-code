#include <iostream>

using namespace std;

//������������Ϣ�������ö����ܴ�Ĳ�������
//Ҫ��������⣺��һ��ʵ��Z��������ֻ��һ�ݣ��ڶ������ݷ��ʱ�����

//��ȡ��ͬ���ݵ�һ����ͬM����ȥ,Ȼ���ñ���ȡ����ʽ���࣬�ֱ���̳��Թ�����(M)

//class���͡�������ࡡ��̳�

class M
{
public:
    M(int d):
        _d(d){}
    void func()
    {
        cout<<"mmmmm"<<endl;
    }
    int _d;
};

class X:virtual public M
{
public:
    X(int x):M(x){}
    void setData(int d)
    {
        _d = d;
    }
};


class Y:virtual public M
{
public:
    Y(int y):M(y){}

    int getData()
    {
        return _d;
    }

};


class Z:public X, public Y
{
public:
    Z():M(100),X(1),Y(2){}
    void dis()
    {
        cout<<X::_d<<endl;
        cout<<Y::_d<<endl;
        cout<<_d<<endl;
        func();
    }

};


int main()
{
    Z z;
    z.dis();


    return 0;
}

