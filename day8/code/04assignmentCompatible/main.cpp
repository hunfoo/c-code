#include <iostream>

using namespace std;

class Shape
{
public:
    Shape(int x, int y)
        :_x(x),_y(y){}

    void draw()
    {
        cout<<"draw from"<<"("<<_x<<","<<_y<<")"<<endl;
    }

protected:
    int _x;
    int _y;
};

class Circle:public Shape
{
public:
    Circle(int x, int y,int r)
        :Shape(x,y),_radius(r)
    {}

    Circle& operator=(const Circle & another)
    {
        if(this ==&another)
            return *this;
        Shape::operator=(another);
        this->_radius = another._radius;
        return *this;
    }

    void draw()
    {
        cout<<"draw from"<<"("<<_x<<","<<_y<<") ";

    }

    void func()
    {
        cout<<" radius = "<<_radius<<endl;
    }

private:
    int _radius;
};

//��ֵ����ֻ�����ڹ��������ĸ��ӹ�ϵ��
//������󸳸�����Ķ���
//������󸳸���������á�
//�������ĵ�ַ���������ָ�롣

int main()
{
    Shape s(100,200);

    Circle c(1,2,3);
    c = (Circle&)(s);
    c.draw();
    c.func();


}



int main1()
{
    Shape s(1,2);
    s.draw();

    Circle c(3,4,5);
    c.draw();
    c.func();

    s = c;
    s.draw();

    Shape & rc = c;
    rc.draw();

    Shape * ps = &c;

    ps->draw();

    return 0;
}

