#include <iostream>

using namespace std;

#if 0
static
ȫ�ֱ��� ������ static  ������ �����ڱ��ļ�

�ֲ����� auto           �������� �洢λ��
#endif

#if 0
static �����ڲ��ı��֣�����ʵ��������������ݹ���

�����ɶ����ʱ����ͨ����Ա���пռ䡣�� static ��Ա����־����ʱ�򣬾ͼ��������˿ռ�(data rw)

static ���ݳ�Ա���������࣬Ҳ���ڶ��󣬵��չ����ࡣ

����ʵ������Ҳ��һ�������ռ�


1����ʼ��
   ���ڶ��壬�����ʼ���� type ����:: ������=��ֵ
2��static ���ݳ�Ա���������࣬Ҳ���ڶ��󣬵��չ����ࡣ



;
#endif

namespace Space
{
    int share = 1111;
}

class A
{
public:
    void func()
    {
        cout<<share<<endl;
    }
    void modify(int m)
    {
        share = m;
    }


    int x; int y;
    static int share;
};

int A::share = 100;


int main()
{
//    A  a,b,c;
//    a.func();
//    a.modify(2000);
//    b.func();
//    c.func();

    cout<<A::share<<endl;
    A a;
    a.func();

    cout<<Space::share<<endl;
    return 0;
}

