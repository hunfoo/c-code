#include <iostream>

using namespace std;

//��������(����̬)
//��������ͬ�� �����б�ͬ�� ���ͣ�������˳��

//��ֵ���Ͳ�������������

//ƥ��ԭ��
//1,�ϸ�ƥ�䣬2����ʽת�� double int float   int long double

long print(long a)
{
    cout<<a<<endl;
    printf("void print(int a)\n");
}

double print(int a)
{
    cout<<a<<endl;
    printf("void print(float a)\n");
}

//void print(char b)
//{
//    printf("void print(char b)\n");
//}

//void print(int a, char b)
//{
//    printf("void print(int a, char b)\n");
//}

//void print(char a, int b)
//{
//    printf("void print(char a, int b)\n");
//}

int main()
{
//    print((double)1); //signed int   int long double
//    print('a');  //A  a
//    print(3.4);  //  int a = 4.5;  double  int float

//    print("china");

//    long a = print(1);
//    double b = print(1);


    print(1);


    return 0;
}

