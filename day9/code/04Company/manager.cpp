
#include "manager.h"

Manager::Manager()
{

}

void Manager::init()
{
    cout<<"�����뾭�������:";
    cin>>name;
    fixSalary = 8000;
}

void Manager::calcSalary()
{
    salary = fixSalary;
}

void Manager::promote()
{
    grade = 4;
}

void Manager::disInfo()
{
    cout<<"������"<<name<<endl;
    cout<<"����: "<<num<<endl;
    cout<<"����: "<<grade<<endl;
    cout<<"нˮ: "<<salary<<endl;
    cout<<"---------------------"<<endl;
}

