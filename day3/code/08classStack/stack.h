#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;



// constructor  ������
// 1,��������ͬ���޷��أ���ϵͳ���ɶ���ʱ�Զ����ã����ڳ�ʼ����
// 2,�����в����������������أ�Ĭ�ϲ���, ���غ�Ĭ�ϲ�ͬʱ���� ,�������䣬Ϊ�˶�����޲δ�����
// 3,��δ�ṩ�κι��죬ϵͳĬ������һ���޲οչ����������ṩ����������Ĭ�Ϲ�����


//destrcutor   ������
// 1,~��������ͬ���޲Σ��޷��أ�
// 2,������ʧ��ʱ���Զ����������ڶ�������ʱ���ڴ洦������
// 3,��δ�ṩ��ϵͳĬ������һ������������

class Stack
{
public:
    Stack(int size = 100)
    {
        top = 0;
        space = new char[size];
        _size = size;
    }

    bool isEmpty();
    bool isFull();
    char pop();
    void push(char c);

    ~Stack()
    {
        delete space;
    }

private:
    char *space;
    int top;
    int _size;
};


#endif // STACK_H
