#include <iostream>

using namespace std;

//����(ȫ�֣�Ҳ����ĳ�Ա����)��������Ԫ����Ϊ��Ԫ������



class A
{
public:
    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    int getZ()
    {
        return z;
    }
    friend  void dis(A & t);

    void dis()
    {
        cout<<x<<y<<z<<endl;
    }


private:
    int x;
    int y;
    int z;

};



void dis(A & t)
{
    cout<<t.x<<t.y<<t.z<<endl;
}




int main()
{
    A  a;
    B  b;
    for(int i=0; i<1000; i++)
        b.dis(a);
    return 0;
}

