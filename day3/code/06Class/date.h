#ifndef DATE_H
#define DATE_H


//������ʵҲ��һ�ֱ���������ռ�

namespace Space
{

class Date
{
public:
    void init();  //����
    void print();
    const int& getYear();
    bool isLeapYear();
private:
    int year;   //���ݳ�Ա
    int month;
    int day;
};

}


#endif // DATE_H
