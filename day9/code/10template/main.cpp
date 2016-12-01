#include <iostream>

using namespace std;


#if 0
void Swap(int & a,int & b)
{
    int t = a;
    a = b;
    b = t;
}
void Swap(double &a, double&b)
{
    double t = a;
    a = b;
    b = t;
}
void Swap(long &a, long &b)
{
    long t = a;
    a = b;
    b = t;
}
#endif


//����ģ��  ���ݾ�������Ͳ��� ģ�庯��
template<typename  T>
void Swap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

int main()
{
    long a = 4;long b = 5;
    cout<<a<<b<<endl;
    Swap<long>(a,b);
    cout<<a<<b<<endl;
    return 0;
}

