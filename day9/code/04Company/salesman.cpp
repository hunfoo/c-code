
#include "salesman.h"


SalesMan::SalesMan()
{

}

void SalesMan::init()
{
    cout<<"���������۵�����:";
    cin>>name;
    cout<<"������������Ա�ĵ������۶�:";
    cin>>monthSaleAmount;
    rate = 0.04;
}

void SalesMan::calcSalary()
{
    salary = monthSaleAmount * rate;
}
void SalesMan::promote()
{
    grade = 1;
}

void SalesMan::disInfo()
{
    cout<<"������"<<name<<endl;
    cout<<"����: "<<num<<endl;
    cout<<"����: "<<grade<<endl;
    cout<<"нˮ: "<<salary<<endl;
    cout<<"---------------------"<<endl;
}

