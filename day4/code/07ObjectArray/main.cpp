#include <iostream>

using namespace std;

class Stu
{
public:
    Stu(string n = ""):_name(n){} //���أ�Ĭ�ϲ���  ���䣨�����޲Σ�
    void dis()
    {
        cout<<_name<<endl;
    }
private:
    string _name;
};

int main()
{
    Stu array[2] = {Stu("abc"),Stu("haha")};


    Stu *ps = new Stu[1000]{Stu("bob"),Stu("jim")};
    return 0;
}

