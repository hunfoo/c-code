#ifndef ANIMAL_H
#define ANIMAL_H



//������  ����Ϊ��������ȫ(��delete ����ָ���ʱ�򣬽��������������ȫ)
//��һ���������麯���Ľ����뽫����������һ��virtual

class Animal
{
public:
    Animal();
    virtual ~Animal();
    virtual void voice() = 0;
};

#endif // ANIMAL_H
