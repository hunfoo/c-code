#include <iostream>

using namespace std;

int main()
{
    int a;  // �������ǣ�һ���ڴ�����ã�������
    int & ra = a;

    int *p = &ra;
    //���Զ�����ȡ��ַ�����ǲ��ܽ����õ�ָ��  int & *p = &ra;


    int &rra = ra;
    //���Զ������ٴ����ã����ǲ��ܽ����õ����� int & & =  ra



    return 0;
}

