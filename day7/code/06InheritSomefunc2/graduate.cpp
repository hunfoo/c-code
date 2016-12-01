#include "graduate.h"

//����δʵ�ֿ�������ʱ������ø���Ŀ���������(����ʵ�ֻ�δʵ��)
//����һ��ʵ�ֿ������죬�������ʾ�ĵ��ø���Ŀ�����������


//������δʵ�ָ�ֵ����ʱ������ø���ĸ�ֵ����(����ʵ�ֻ�δʵ��)
//����һ��ʵ�ָ�ֵ���أ������������ø���ĸ�ֵ���ء�

Graduate::Graduate(string sn, int ia, float fs,double ds)
    :Student(sn,ia,fs),salary(ds)
{

}

void Graduate::print()
{
    dis();
    cout<<"salary:"<<salary<<endl;
}

Graduate::Graduate(const Graduate& another)  //name,age,score, salary
    :Student(another),salary(another.salary)
{
    // ��ֵ����(�������(���û�ָ��)�����Ը����������(���û�ָ��))

}

Graduate& Graduate:: operator=(const Graduate & another)
{
    if(this == &another)
        return *this;

    Student::operator =(another);  // Student &operator=(const Student &)

    this->salary = another.salary;

    return *this;
}

