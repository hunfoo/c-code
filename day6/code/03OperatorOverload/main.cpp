#include <iostream>

using namespace std;


class Complex
{
public:
    Complex(float x=0, float y=0)
        :_x(x),_y(y){}
    void dis()
    {
        cout<<"("<<_x<<","<<_y<<")"<<endl;
    }
//    friend Complex operator+(Complex & a, Complex & b);

    const Complex operator+(Complex& another);


private:
    float _x;
    float _y;
};

//Complex operator+(Complex & a, Complex & b)
//{
//    Complex  t;
//    t._x = a._x + b._x;
//    t._y = a._y + b._y;

//    return t;
//}

const Complex Complex::operator+(Complex& another)
{
    Complex t;
    t._x = this->_x + another._x;
    t._y = this->_y + another._y;

    return t;
}


int main()
{
    Complex c1(1,2) ,c2(2,3);

    Complex  c =c1 + c2;  //operator+(c1,c2); c1.operator+(c2);
    c1.dis();
    c2.dis();
    c.dis();


    int i,j,k;  (i+j) = k;

    (c1+ c2) = c;
    return 0;
}

#if 0
ͨ������£�

��Ŀ �� ˫Ŀ
��Ŀ:
����Ϊ��Ա������Ҫ0������������Ϊ��Ԫ��ʱ����Ҫ1������


˫Ŀ ��+��
����Ϊ��Ա������Ҫһ������������Ϊ��Ԫ��ʱ����Ҫ��������
    friend Complex operator+(Complex & a, Complex & b);
    const Complex operator+(Complex& another);
#endif








