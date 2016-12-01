#include <iostream>

using namespace std;


//��������� �� �����������͵��÷�
//���ض�������ã��ܷ������þͷ������á�
//const ��const,��const�ͷ���const


class Complex
{
public:
    Complex(float x=0, float y=0)
        :_x(x),_y(y){}
    void dis()
    {
        cout<<"("<<_x<<","<<_y<<")"<<endl;
    }

    Complex & operator++();
    const Complex operator++(int); //��Ԫ
private:
    float _x;
    float _y;
};
Complex & Complex::operator++()
{
    this->_x++;
    this->_y++;
    return *this;
}


const Complex Complex::operator++(int)
{
    Complex t(this->_x,this->_y);

    this->_x++;
    this->_y++;

    return t;
}


int main()
{
    Complex c;
    cout<<c;  //operator<<  cout.operator<<(c); ostream& operator(cout,c)
}



int main2()
{
    int a = 100;
    int b = a++;
//    a++++;
    cout<<a<<b<<endl;

    Complex c(1,2);

    Complex c1 = c++;
//    c++++;
    c.dis();
    c1.dis();
    return 0;
}





int main1()
{
    int a = 100;
    int b = ++a;
    cout<<a<<b<<endl;
    ++++++a;
    cout<<a<<endl;



    Complex  c(1,2);
    Complex  c2 = ++++c; // (2,3)
    c.dis();
    c2.dis();//(2,3)

    return 0;
}


//a.operator+(b);  a+b
//a.operator()(b); a()(b);a(b)
//a.operator++();  a++;
//a.operator->();  a->func()



