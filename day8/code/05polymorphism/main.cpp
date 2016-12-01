#include <iostream>
using namespace std;

#if 0
1,���������麯��.
2,�����и�д(override)�˸�����麯��
3,����������ַ���������ָ�룬�������麯���ĵ��á�
#endif

//1�����麯���ķ����� virtual void func(); �����͹ؼ���

//2��д(override)
//overload���� ͬһ�������У���������ͬ�������б�ͬ��
//shadow       �����ڸ������е�ͬ����Ա��
//override     �����ڸ������У������к�����virtual�����ĺ�����
//������,ͬ�Σ�ͬ����ͬ���صĺ�����֮�乹�ɸ�д��

//3��д�ĺ������ǲ���һ��ͬ����ķ��ʷ�ʽһ�¡������������

#if 0

class Shape
{
public:
    Shape(int x, int y)
        :_x(x),_y(y){}
    virtual void draw();

protected:
    int _x;
    int _y;
};
void  Shape::draw()
{
    cout<<"draw from"<<"("<<_x<<","<<_y<<")"<<endl;
}

class Rect:public Shape
{
public:
    Rect(int x,int y, int len, int wid)
        :Shape(x,y),_len(len),_wid(wid)
    {
    }


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
    c.draw();
    Rect r (3,4,5,6);
    r.draw();

    Shape* ps;

    int choice;

    while(1)
    {
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                ps =&c;
                ps->draw();
                break;
            case 2:
                ps = &r;
                ps->draw();
                break;
        }
    }

    return 0;
}
#endif

class A
{
public:
    virtual void func(){
        cout<<"aaaaaa"<<endl;
    }
};

class B:public A
{

};

class C:public B
{
public:
    virtual void func(){
        cout<<"cccccccc"<<endl;
    }
};
int main()
{
    C c;
    A *pa = &c;
    pa->func();
    return 0;
}



















#if 0

//����̬������׶ξ����ġ�
//����̬��������ʱ�����ġ�

void func(int a,float b)  //func_i_f()
{

}
void func(float a, int b) //func_f_i()
{

}

int main()
{
    func_i_f(2,3.0);
    func_f_i(3.0,4);
    return 0;
}

#endif
