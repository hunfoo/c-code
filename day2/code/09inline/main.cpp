#include <iostream>

using namespace std;

#if 0
�ŵ㣺������Ƕ�������˺����ĵ��á�
ȱ��: �ײ������壬��ʹtext���������,����������ͼ�顣
#endif

#define SQR(i) ((i)*(i))


#if 0
�ŵ㣺һ�θ߶ȳ�����߼������ײ�������,ʹtext�������С����������ͼ�顣
ȱ��: �������õ�ѹջ���ջ�Ŀ�����
#endif

inline int sqr(int i)
{
    return i*i;
}


//Ϊ�β������еĺ���inline

//inline ����˸���������һ�ֽ��顣




int main()
{
    int i = 0;
    while(i<5)
    {
        cout<<SQR(i++)<<endl;
    }

    return 0;
}

