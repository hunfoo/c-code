
#include <iostream>


//���븴�õ�����  �̳� ����  inherit derive  is-a
//class A:public class B,public class C
//�̳з�ʽ��public  protected  private  //��ǰ�õ���һ�ַ���Ȩ��
//��Ӱ�������Ա�ķ��ʷ�ʽ��Ӱ���˸����Ա�������еķ���Ȩ�ޡ�һ�������ڣ����������
//public protected private  inaccess

#if 0
              public
pub           pub
pro           pro
pri           inaccess
#endif

//���������������죬��ֵ���������

//��ʼ��˳�������
//�ȸ���Ĺ�����,�����Ĺ�����������Ĺ�����������˳�����÷�֮
using namespace std;


class M
{
public:
    M(){
        cout<<"M()"<<endl;
    }
};



class A
{
public:
    A(int i){
        cout<<"A()"<<endl;
    }
};


class B:public A
{
public:
    B():A(1){
        cout<<"B()"<<endl;
    }

    B(const B & another)
        :A(another),m(another.m)
    {

    }

    B & operator=(const B & another)
    {
        if(this == &another)
            return *this;
        A::operator =(another);

        m = another.m;

        return *this;
    }


private:
    M m;
};

int main()
{
    B  b;

    B  bb(b);

    B bbb;

    bbb = b;

    return 0;
}

