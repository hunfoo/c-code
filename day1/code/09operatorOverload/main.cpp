#include <iostream>
using namespace std;

//c++��Ϊ һ�в��������Ǻ����� �����ǿ������ص�(�������������������������)��

struct Complex  //����
{
    float real;
    float image;
};


Complex operator+(Complex a, Complex b)
{
    Complex c;
    c.real = a.real + b.real;
    c.image = a.image + b.image;
    return c;
}

//Complex add(Complex a, Complex b)
//{
//    Complex c;
//    c.real = a.real + b.real;
//    c.image = a.image + b.image;
//    return c;
//}

int main()
{
    int a, b;
    int c = a + b;

    Complex aa = {1,2}, bb = {2,3};
    Complex cc =/* add(aa,bb);*/ operator+(aa,bb);

    cout<<"cc = "<<"("<<cc.real<<","<<cc.image<<")"<<endl;
    return 0;
}

