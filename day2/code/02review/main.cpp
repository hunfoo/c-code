#include <iostream>
#include <string.h>

using namespace std;


//����̬
//����׶�
//��������ͬ�������б�ͬ(���ͣ�������˳��)
//��ֵ���Ͳ�����Ϊ���صı�־

//�ϸ�ƥ��  ��ʽת��
// double int float    int long double  ambiguous

extern "C"
{
void func(int a) // void func_i(int a)
{

}

void func(int a, char b) // void func_ic(int a, char b)
{

}

}

int main()
{
    func(10);    //func_i(10);
    func(10,'a');//func_ic(10,'a');
    return 0;
}

