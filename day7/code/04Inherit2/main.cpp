#include <iostream>

using namespace std;

class Father
{
public:
    int x;
protected:
    int y;
private:
    int z;

};

class Son:public Father
{
public:
    int pub;
    void func()
    {
       x = 3;
       y = 4;
//       z = 5;
    }

protected:
    int pro;
private:
    int pri;
};

// �̳з�ʽpublicû��Ӱ��ɶ�� Ӱ����ɶ
//û��Ӱ�� ����ĳ�Ա���ʷ�ʽ��
//Ӱ���˸�Ϊ�еĳ�Ա������ķ��ʷ�ʽ, �������ڣ� �����������

#if 0

father      public
pub         pub(pubic)
pro         pro(protected)
pri         inaccess

#endif

int main()
{
    Son s;
    s.pub;

    s.x = 100;
    s.y = 200;
    s.z = 200;



    return 0;
}

