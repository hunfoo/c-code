#include <iostream>

using namespace std;


#if 0
const  ���ݳ�Ա ��Ա����  �����

���ݳ�Ա����ʼ�� �ڹ������Ĳ����б������޸�
��Ա������ʵʼ��λ�� ����֮�� ʵ����֮ǰ��
    ��ŵ�����޸����ݡ����Է���const�ͷ�const�����ݣ���ֻ����const ��Ա������
�����  �� ��ŵ�����޸����ݡ����Է���const�ͷ�const�����ݣ���ֻ����const ��Ա������

#endif



#if 0

static ���ݳ�Ա

ʵ����������ݹ���
�洢λ��  data rw/bss  sizeof(A)   4;  ��ʼ�� �������ʼ��
type  ����::������ = ��ֵ��

����::������    ��Ա��������


static ��Ա����

����::��Ա����   ����./->��Ա����   thisָ��

ֻ�ܵ���static ���ݺͳ�Ա������
;


const static     �͵�ʵʼ��
#endif


#if 0
ָ���� �ĳ�Ա��ָ��
���ݳ�Ա


;
#endif



//(this->*pa[idx])();

class B
{
public:
    void func()
    {
        cout<<"void func()"<<endl;
    }

    string name;


};


int main()
{
   string B:: *ps =  &B::name;  // �������ʼ��ַ��ƫ����

   B  b;  B *pb = new B;
   b.*ps = "china"; cout<<b.*ps<<endl;
   pb->*ps = "canada"; cout<<pb->*ps<<endl;


   void (B::*pf)(void)  =  B::func;

   (b.*pf)();   // .*  ->*
   (pb->*pf)();



    return 0;
}
















class A
{
public:
    A()
    {

    }
    static void func(){


    }

    void print()
    {
       cout<<"void print()"<<endl;
       cout<<a<<endl;
    }

private:
    int a;
    static int b;

};

int main1()
{
    A::func();
    return 0;
}

