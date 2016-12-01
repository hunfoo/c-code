#include <iostream>


(float)5/8; static_cast<float>(5)/8;

using namespace std;


class Mail;
class Sender
{
public:
    Sender(string addr)
        :_addr(addr){}
    Sender &operator<<(Mail & mail);

private:
    string _addr;
};

class Mail
{
public:
    Mail(string title, string contents,string t)
        :_title(title),_contents(contents),_time(t){}

    friend Sender & Sender::operator<<(Mail & mail);
private:
    string _title;
    string _contents;
    string _time;
};

Sender & Sender::operator<<(Mail & mail)
{
    cout<<_addr<<endl;
    cout<<mail._title<<endl;
    cout<<mail._contents<<endl;
    cout<<mail._time<<endl;

    return *this;
}


int main()
{
    Sender sender("guilin_wang@163.com");
    Mail mail1("����","������ְ��н����","2015.10.20"),
         mail2("ȡ������","�ղŷ����������ʼ�������Ϊ׼����������","2015,10,21");

    sender<<mail1<<mail2;
    return 0;
}

