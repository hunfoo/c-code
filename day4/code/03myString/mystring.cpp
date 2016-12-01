#include "mystring.h"
#include <string.h>

myString::myString(const char *p)  //""
{
    if(p == NULL)
    {
        _str = new char[1];
        *_str = '\0';
    }
    else
    {
        int len = strlen(p);
        _str = new char[len+1];
        strcpy(_str,p);
    }
}

#if 0
1,��ʽ    A(const A & another);
2,�����ṩ��ϵͳ���ṩĬ��(�ɹ�����)��һ���Զ��壬ϵͳ�����ṩĬ�ϡ�
3,ϵͳ�ṩ��Ĭ�ϣ���һ�ֵ�λ������Ҳ���ǽ���˵�ģ�ǳǳ�Ŀ�����
4,ǳ�������ᵼ�£��ڴ���������double free. ����Щ�����(���жѿռ��ʱ��)��Ҫ��ʵ�ֿ�������



#endif

#if 0
��ֵ���������=

1,�������ṩĬ��(����ɹ���ԭ��)��һ���Զ��壬ϵͳ�����ṩĬ��
2,Ĭ�ϸ�ֵ���������Ҳ��һ�ֵ�λ��ֵ��ǳ��ֵ��
3,ǳ��ֵ���п��ܻᵼ��
    1�������ڴ�й©��
    2���ڴ淢����������
    3���Ը�ֵ��;


#endif


myString& myString::operator=(const myString & another)
{
    if(this == &another)
        return *this;
    delete []this->_str;
    int len = strlen(another._str);
    this->_str = new char [len+1];
    strcpy(this->_str,another._str);

    return *this;
}

myString::myString(const myString & another)
{
    //��ͬ��֮�䣬��û����˽�ġ�
    int len = strlen(another._str);
    _str = new char[len+1];
    strcpy(_str,another._str);
}

myString::~myString()
{
    delete []_str;
}

char * myString::c_str()
{
    return _str;
}

myString myString::operator+(const myString & another)
{
    myString tmp;    // char * = ""->"abcd efg";  *this  char * = "abcd"  another char *  = "efg"
    delete []tmp._str;

    int len = strlen(this->_str);
    len += strlen(another._str);

    tmp._str = new char[len+1];
    memset(tmp._str,0,len+1);

    strcat(tmp._str,this->_str);
    strcat(tmp._str,another._str);
    return tmp;
}

bool myString::operator>(const myString & another)
{
    if(strcmp(this->_str,another._str)>0)
        return true;
    else
        return false;

}

bool myString::operator<(const myString & another)
{
    if(strcmp(this->_str,another._str)<0)
        return true;
    else
        return false;
}

bool myString::operator==(const myString & another)
{
    if(strcmp(this->_str,another._str)==0)
        return true;
    else
        return false;
}

char& myString:: operator[](int idx)   //xx[2]; xx.operator[](int idx)
{
    return this->_str[idx];
}

char myString:: at(int idx)
{
    return this->_str[idx];
}
