#include <iostream>
using namespace std;

//void swap(int *pa, int *pb)
//{
//    *pa ^= *pb;
//    *pb ^= *pa;
//    *pa ^= *pb;
//}

void swap(int &ra, int &rb)
{
    ra ^= rb;
    rb ^= ra;
    ra ^= rb;
}

//void swap(char**p, char **q)
//{
//    char *t = *p;
//    *p = *q;
//    *q = t;
//}


//ƽ���ڽ�����⣬Ȼ�󲻿��ٶ���Ŀռ�

//���õı��ʣ��Ƕ�ָ����ٴΰ�װ�� ָ����������ã���Ӧ�������õ�ָ�롣
void swap(char* &p, char *& q)
{
    char *t = p;
    p = q;
    q = t;
}



int main()
{
    int a = 5;int b = 3;
    swap(a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;


    char *p = "china";  //char* & rp =   p;
    char *q = "america";

    cout<<"p = "<<p<<" q = "<<q<<endl;
    swap(p,q);
    cout<<"p = "<<p<<" q = "<<q<<endl;
    return 0;
}

