#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    int a = 0x12345678;
//    cout.unsetf(ios::dec);
//    cout.setf(ios::hex);
//    cout<<a<<endl;
//    cout.unsetf(ios::hex);
//    cout.setf(ios::oct);
//    cout<<a<<endl;
//    cout<<hex<<a<<endl;
//    cout<<dec<<a<<endl;
//    cout<<oct<<a<<endl;


//    double dd=123.4567;
//    cout<<dd<<endl;
//    cout<<setiosflags(ios::scientific)<<dd<<endl;
//    cout<<resetiosflags(ios::scientific);
//    cout<<setiosflags(ios::fixed)<<dd<<endl;
//    cout<<setprecision(2)<<setiosflags(ios::fixed)<<dd<<endl;


    int num=0xabcd;
    cout<<"�Դ�Сд��ʽ���������: "<<endl;
    cout<<"16 ������(Ĭ�ϣ�Сд��ʽ):"<<hex<<num<<endl;
    cout<<"�Դ�д��ʽ���������: "<<setiosflags(ios::uppercase)<<hex<<num<<endl;
    cout<<"�ָ�Сд��ʽ���������: "<<resetiosflags(ios::uppercase)<<hex<<num<<endl;


    return 0;
}

