#include <iostream>

using namespace std;

// virtual void draw() = 0; ���麯����ʽ
//���麯��û��ʵ���壬���д��麯�����࣬�Ƴ�����࣬������࣬������ʵ�л�
//java interface �ӿڣ����þ��Ǹ������ṩ�ӿ��õġ�


class Shape
{
public:
    Shape(int x, int y)
        :_x(x),_y(y){}
    virtual void draw() =0 ;

protected:
    int _x;
    int _y;
};


class Rect:public Shape
{
public:
    Rect(int x,int y, int len, int wid)
        :Shape(x,y),_len(len),_wid(wid)
    {
    }
//    virtual void draw()
//    {
//        cout<<"start from "<<"("<<_x<<","<<_y<<")";
//        cout<<"len = "<<_len<< " wid = "<<_wid<<endl;
//    }


private:
    int _len;
    int _wid;
};

class Circle:public Shape
{
public:
    Circle(int x, int y,int r)
        :Shape(x,y),_radius(r){}

    virtual void draw()
    {
        cout<<"start from "<<"("<<_x<<","<<_y<<")";
        cout<<" radius = "<<_radius<<endl;
    }

private:
    int _radius;
};

int main()
{
    Circle c(1,2,3);

    Rect  r(3,4,5,6);

    Shape *ps = &c;
    ps->draw();

    ps = &r;
    ps->draw();

    return 0;
}


