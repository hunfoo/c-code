#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;



int main()
{
//    int a;
//    double b;
//    char buf[1024];

//    cin>>buf;

//    cout<<"a = "<<a<<endl;
//    cout<<"b = "<<b<<endl;
//    cout<<"buf = "<<buf<<endl;
//    fstream fs("abc.txt",ios::in|ios::out|ios::trunc);
//    fs<<1<<" "<<2<<" "<<3<<endl;  //123\n
//    fs.seekg(0,ios::beg);
//    int a,b,c;
//    fs>>a>>b>>c;
//    cout<<"a = "<<a<<endl;
//    cout<<"b = "<<b<<endl;
//    cout<<"c = "<<c<<endl;

//    char a,b,c,d;


////    while((cin.get(ch)),!cin.eof())
////    {
////        cout.put(ch);
////    }


    //ȥ��n���ַ����ڶ���n-1�ַ�ǰ�������˽�ֹ����ֹͣ�������ء���ֹ��û�б�����buf��Ҳû�д�����������ʧ��Խ����
    //ȥ��n���ַ�����û��������ֹ��ǰ��Ҳû�ж���n-1��������������״̬��
    //ȥ��n���ַ�����û��������ֹ��ǰ,������n-1���ַ������µĿռ�\0
//    cin.get(a).get(b).get(c).get(d);
//    cout<<a<<b<<c<<d<<endl;

//    char buf = new char[1024];
    char buf[1024];
//    cin>>buf;
//    cout<<buf<<endl;
//    cin.get(buf,1024,'i');
//    cout<<buf<<"xxx"<<endl;
//    cin.ignore(1);
//    memset(buf,0,1024);
//    cin.get(buf,10,'i');
//    cout<<buf<<"ooo"<<endl;
//    cin.get(buf,10,'i');
//    cout<<buf<<endl;

    //ȥ��n���ַ����ڶ���n-1�ַ�ǰ�������˽�ֹ����ֹͣ�������ء�
    //��ֹ��û�б�����buf��Խ���˽�ֹ����

    cin.getline(buf,1024,'i');
    cout<<buf<<endl;
    cin.getline(buf,1024,'i');
    cout<<buf<<endl;




    return 0;
}

