#include "salesmanager.h"

SalesManager::SalesManager()
{

}

void SalesManager::init()
{
    cout<<"���������۾��������:";
    cin>>name;

    cout<<"������������Ա�ĵ������۶�:";
    cin>>monthSaleAmount;
    fixSalary = 5000;
    rate = 0.05;
}

void SalesManager::calcSalary()
{
    salary = fixSalary + monthSaleAmount * rate;
}

void SalesManager::promote()
{
     grade  = 3;
}

void SalesManager::disInfo()
{
    cout<<"������"<<name<<endl;
    cout<<"����: "<<num<<endl;
    cout<<"����: "<<grade<<endl;
    cout<<"нˮ: "<<salary<<endl;
    cout<<"---------------------"<<endl;
}

