#include <iostream>

using namespace std;

class Father
{
public:
    void dis(int)
    {
        cout<<"fatherfather"<<endl;
    }

    void print()
    {

    }
};

class Son:public Father
{
public:
    void dis()          //shadow �����л�Ѹ��������ĳ�Աshadow ������ͬ�����ɹ���shadow
                        //�� ��Ҫʹ�����еĳ�Աͬ�����еĳ�Աͬ��
    {
        dis(4);
        cout<<"sonson"<<endl;
    }
};

int main()
{
    Son son;
    son.dis();
    return 0;
}

