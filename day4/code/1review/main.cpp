#include <iostream>
#include <string.h>

using namespace std;

#if 0
class Date
{

};
Date d; d.init()
class List
{

};
class Stack
{

};

#endif


#if 0

������
1,������ͬ���޷��أ������ɶ���ջ�ѣ�ʱ���Զ������á�һ����ʵʼ������
2,ϵͳ�ṩĬ���޲οչ������������в��������Ա����أ���Ĭ�ϲ�����
  ���ػ���Ĭ�϶�����ʵ���޲ε������Ĭ�ϸ���һЩ��
3,һ���ṩ�Զ��幹������ϵͳĬ�ϲ������ڡ�


�����б� �ں�������֮��ʵ����֮ǰ  ����ͷ x(y)

������
1,~������ͬ���޲��޷��ء��ڶ�������֮ǰ�����á�
2��ջ�����뿪�����򣬶Ѷ���delete





class A
{
public:
    A(int i=0,int j=0, int k=0)   //�����б�Ч�ʸ�
        :x(i),y(j),z(k)
    {

    }

private:
    int x;
    int y;
    int z;

};



int main()
{
    A  a;


    return 0;
}



class Stu
{
public:
    Stu()
    {
        name = new char[100];
    }
    ~Stu()
    {
        delete name;
    }

    char *name;
    int age;
};

int main()
{
    Stu * s = new Stu;

    delete s;
}

#endif


//�����б���ʼ��˳�򣬸�����������˳���йأ�����ʼ�����е�˳���޹�

class Stu
{
public:
    Stu(string na)
        :len(strlen(na.c_str())),name(na)
    {
    }

    void dis()
    {
        cout<<len<<endl;
    }


private:
    string name;
    int len;

};

int main()
{
    Stu s("china");

    s.dis();
    return 0;
}

