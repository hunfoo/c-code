#include <iostream>

using namespace std;

//���ڲ���private protected public Ӱ��ķ���Ȩ��
//�̳���  private protected public�������еĳ�Ա�������еķ���Ȩ��,
//��Ӱ���������еĳ�Ա���ʷ�ʽ
//1,�������У�2�������������

// 99% ֻʹ��public�̳з�ʽ


#if 0

           public              protected                  private
pub        pub                 pro                        pri
pro        pro                 pro                        pri
pri        inaccess            inaccess                   inaccess

#endif

#if 0
            public              public                  public
pub         pub                 pub                      pub
pro         pro                 pro                      pro
pri         inaccess            inaccess                 inaccess

#endif



//public    �ӹ��ӿ��õ�
//protected ���������õ�,��������
//private   ���������õ�

#if 0
            protected           protected                protected
pub         pro                 pro                      pro
pro         pro                 pro                      pro
pri         inaccess            inaccess                 inaccess

#endif


#if 0
            private             private                  private
pub         pri                 inaccess                 inaccess
pro         pri                 inaccess                 inaccess
pri         inaccess            inaccess                 inaccess

#endif


//�̳з�ʽ�ܽ�
//public     ���нӿڣ�Ҳ����������
//protected  ����������
//private    ��û�д��нӿڣ�Ҳû�д������ݡ�



class Base
{
public:
    int pub;
protected:
    int pro;
private:
    int pri;
};

class Derive:protected Base
{
public:
    int x;

    void func()
    {
        pub = 100;
        pro = 200;

    }

protected:
    int y;
private:
    int z;
};

int main()
{
    Derive d;
    d.x = 100;
    d.pub = 100;



    return 0;
}

