#include <iostream>

using namespace std;

//:: �����������  ǰ��Ҫ�����ռ�

//ȫ�����������ռ�
//�ֲ�

//namespace �Ƕ�ȫ�������ռ���ٴλ��֡�

int v = 55;

void func()
{
    cout<<"void func()"<<endl;
}

int main()
{
    int v = 5;
    cout<<v<<endl;
    cout<<::v<<endl;



    ::func();
    return 0;
}

