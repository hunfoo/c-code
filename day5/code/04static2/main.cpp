#include <iostream>

using namespace std;


//static ���γ�Ա��������������ֻ��һ�������ڹ���static��Ա��
//static ���εĳ�Ա������������Ҳ���ڶ��󣬵��չ����ࡣ
//staic ���εĳ�Ա��������Ϊ�������࣬����û��thisָ�룬���ܷ��ʷ�staitc ���ݳ�Ա������Ա����


class School
{
public:
    string & getTower()
    {
        return tower;
    }
    static string& getLib()
    {
        return lib;
    }

private:
    string tower;
    string lake;

    static string lib;
};


string School::lib = "";
int main()
{
    School::getLib() = "�����澭";
    School::getLib() += "+������";


//    School cz, bn, blueshit;
//    cz.getTower() = "boyala";
//    bn.getTower() = "shuita";
//    blueshit.getTower() = "wajueta";

//    cz.getLib()  += "+ ������ְ���Դ�ȫ";
//    bn.getLib()  += "+ Զ���Ϊ����";
//    blueshit.getLib() += "+�ھ���ļ�ǿ����";

//    cout<<cz.getLib()<<endl;
//    cout<<blueshit.getLib()<<endl;

    cout<<School::getLib()<<endl;

    return 0;
}

