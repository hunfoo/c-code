#include <iostream>

using namespace std;


class IReader
{
public:
    virtual  string getContents() = 0;
};

class Book:public IReader
{
public:
    virtual string getContents()
    {
        return "��ǰ����ɽ��ɽ�������������и�С���У�Ҫ���Ϻ��н����£���ǰ����ɽ";
    }
};

class NewsPaper:public IReader
{
public:
    virtual string getContents()
    {
        return "����һ���׹���ѡ ��ϣ�����ѡ���׹���λŮ��ͳ";
    }
};

class Mother
{
public:
    void tellStroy(IReader * i)
    {
        cout<<i->getContents()<<endl;
    }
};

int main()
{
    Book b;
    NewsPaper p;

    Mother m;
    cout<<"mother start to tell stroy"<<endl;
    m.tellStroy(&b);
    cout<<"mother start to tell newspaper"<<endl;
    m.tellStroy(new NewsPaper);
    return 0;
}

