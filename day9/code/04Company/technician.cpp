#include "technician.h"

Technician::Technician()
{

}

void Technician::init()
{
    cout<<"�����뼼����Ա������:";
    cin>>name;
    cout<<"�����뼼����Ա�Ĺ�ʱ:";
    cin>>hourAmount;
    moneyPerHour = 100;
}


void Technician::calcSalary()
{
    salary = hourAmount *moneyPerHour;
}

void Technician::promote()
{
    grade = 3;
}

void Technician::disInfo()
{
    cout<<"������"<<name<<endl;
    cout<<"����: "<<num<<endl;
    cout<<"����: "<<grade<<endl;
    cout<<"нˮ: "<<salary<<endl;
    cout<<"---------------------"<<endl;
}
