#include <iostream>
using namespace std;

struct TypeP
{
    char *p;
};
struct TypeC
{
    char c;
};
struct TypeR
{
    char& r; //�����õ��г������������Ķ�������ϵ
};



int main()
{

    printf("%d %d %d\n",sizeof(TypeP),sizeof(TypeC),sizeof(TypeR));

    int a;

    int & ra = a;

     int * const p ;


    ra = 200;


    int b;
    int &ra = b;




    return 0;
}
