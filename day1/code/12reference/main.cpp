#include <iostream>
using namespace std;

// 1 ������һ��������ϵ��������ʱ�����Ҫ��ʼ�������ò����ٿռ�
// 2 ����������ϵ��һ�����������ɱ����
// 3 ���Զ����ã��ٴ����á�������õĽ�����������ָ��ͬһ������

int main()
{
    int a = 500;          // ������  ʵ��һ���ڴ�ռ�ı���
//    *(int *)0xb0002345 = 500;
    int& ra = a;          // ra ��a������

    printf("sizeof(a) = %d, sizeof(ra) = %d\n",sizeof(a),sizeof(ra));
    printf("&a = %p &ra = %p\n",&a,&ra);
    a = 1000;
    printf("a = %d  ra = %d\n",a,ra);
    ra = 2000;
    printf("a = %d  ra = %d\n",a,ra);

    int  b = 200;
    ra = b;  //��ֵ
//    int &ra = b; //����
    printf("a = %d  ra = %d\n",a,ra);

    int& rr =  ra;
    printf("a = %d  ra = %d rr = %d\n",a,ra,rr);

    int& rrr = rr;
    printf("a = %d  ra = %d rr = %d rrr = %d\n",a,ra,rr,rrr);


    return 0;
}

