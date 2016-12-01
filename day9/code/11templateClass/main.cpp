#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;

//���͵����ݽṹ֮һ
//�ײ�Ĵ洢�ռ䣬����һ�£�
//push��ȥ�����ݣ����ײ㱣��һ��
//pop ���������ݣ����ײ㱣��һ��


//��ʱ���࣬��һ���� ģ��--��ģ����-�� �����

template<typename T>
class Stack
{

public:
    Stack(int size)
    {
        space = new  T[size];
        top = 0;
    }
    ~Stack();
    bool isEmpty();
    bool isFull();
    void push( T data);
     T pop();
private:
     T* space;
    int top;
};

template<typename T>
Stack<T>::~Stack()
{
    delete []space;
}
template<typename T>
bool Stack<T>::isEmpty()
{
    return top == 0;
}
template<typename T>
bool Stack<T>::isFull()
{
    return top == 1024;
}
template<typename T>
void Stack<T>::push(T data)
{
    space[top++] = data;
}
template<typename T>
T Stack<T>::pop()
{
    return space[--top];
}
int main()
{
    //Stack  Stack<int>
#if 0
    Stack<int> s(100);
    if(!s.isFull())
        s.push(10);
    if(!s.isFull())
        s.push(10);
    if(!s.isFull())
        s.push(30);
    if(!s.isFull())
        s.push(40);
    if(!s.isFull())
        s.push(50);
    while(!s.isEmpty())
        cout<<s.pop()<<endl;

#endif

    vector<int>  vi;

    for(int i=0; i<10; i++)
        vi.push_back(i);

    for(int i=0; i<vi.size(); i++)
        cout<<vi[i]<<endl;

    return 0;
}
