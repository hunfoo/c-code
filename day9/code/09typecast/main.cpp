#include <iostream>

using namespace std;

//static_cast upcast downcast
//dynamic_cast ֻ�к����麯���ĸ������С�downcast, �ǲ��ǵõ���Ŀ�����ͣ�
//����Ƿ�����ָ�룬������ǣ�����null


class A
{
public:
    virtual ~A()
    {}

};
class B:public A
{

};
class C:public A
{
public:
    void func();
};
class D
{

};

int main()
{
    B  b;
    A *pa = &b;

#if 0
    B* pb  = dynamic_cast<B*>(pa);  //�ɹ�
    cout<<pb<<endl;
    C* pc  = dynamic_cast<C*>(pa);  //�ɹ�  ��ȫ
    if(pc != NULL)
        cout<<pc<<endl;
    D *pd = dynamic_cast<D*>(pa);    //�ɹ� ��ȫ
    if(pd != NULL)
        cout<<pd<<endl;

    B * pb = static_cast<B*>(pa);     //�ɹ�
    cout<<pb<<endl;
    C * pc = static_cast<C*>(pa);     //�ɹ�  ����ȫ
    cout<<pc<<endl;

    D * pd  = static_cast<D*>(pa);     //���ɹ� ��ȫ
    cout<<pd<<endl;
#endif
    //void *
    B * pb = reinterpret_cast<B*>(pa);     //�ɹ�   ����ȫ
    cout<<pb<<endl;
    C * pc = reinterpret_cast<C*>(pa);     //�ɹ�   ����ȫ
    cout<<pc<<endl;
    D * pd  = reinterpret_cast<D*>(pa);     //�ɹ�  ����ȫ
    cout<<pd<<endl;

    return 0;
}



















