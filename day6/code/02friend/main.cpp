#include <iostream>

using namespace std;

#if 0
//��Ԫ   Ƶ������  �ƻ���װ   do while

��Ԫ����  ȫ����Ԫ����   ���Ա��Ԫ����  ǰ������ ����ȫ������

����ʵ�֡�

��Ԫ��    ��һ��������еĳ�Ա��������������һ�������Ԫ������


����Ϊ˭����Ԫ���Ϳ���ͨ��˭�Ķ��󣬷���˭��˽�г�Ա��

#endif

class Point
{
public:
    Point(int x, int y)
        :_x(x),_y(y){}

    friend class B;

private:
    int _x;
    int _y;
};

class B
{
public:
    int getDistance(Point & a, Point& b)
    {
        a._x +b._y;
    }
};




int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

