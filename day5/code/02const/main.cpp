#include <iostream>

using namespace std;


#if 0

1, const �������ݳ�Ա   ��Ա����   �����

2���������ݳ�Աʱ��
    ��ʼ��λ��ֻ����  �����б�����
    ��const ���ε����ݳ�Ա�����ܱ��޸ġ�

3�����γ�Ա����
    λ�� ��������֮��ʵ����֮ǰ��Ҫ���������Ͷ��崦��Ҫ��const ����
    ����: const ������ŵ�� �����޸����ݳ�Ա��
    �ܷ���const �ͷ�const ���ݳ�Ա �������޸� ��const ���ݳ�Ա
    ֻ�ܷ��� const ��Ա������

    ��������
    const ����ֻ�ܵ���const ��Ա������
    ��const ��Ա�������ȵ��÷�const ��Ա���������ޣ���ɵ���const ��Ա������

4�����������

   const ���κ������ǴӺ����Ĳ��棬���޸����ݡ�
   const ���ζ����ǴӶ���Ĳ��棬���޸�����, ֻ�ܵ���const ��Ա������
              ;

#endif




class A
{
public:
    A(int v)
        :val(v)
    {
        a = 200;
    }

    void  dis( ) const;       // int const const int
    void  dis( );             // int const const int


    virtual void print();


private:
    const int val;
    int x, y;


    static  int a;
};

int A::a = 0;

void A::print()
{
    x = 100;
    y = 200;
}

void  A::dis( ) const                 // int const const int
{
    cout<<" void  dis( ) const "<<endl;
}


void  A::dis( )                  // int const const int
{
    cout<<" void  dis( ) "<<endl;
}

int main()
{
    A a(5);
    a.dis();
    return 0;
}

