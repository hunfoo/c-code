#include <iostream>

using namespace std;


void func(const int &ref)
{
    cout<<ref<<endl;
}


void foo(int& ref)
{

}

#if 0

�����ռ䣬Ҫ�����������Ͷ��塣


namespace Space {
.h ��(.h
}
namespace Space{
.cpp  .cpp)
}

#endif



int main()
{

    const int a = 20;

//    const int & ra = a;
    foo(const_cast<int&>(a));

    std::cout<<"abcd"<<std::endl;

    using namespace std;
    cout<<"abcd"<<endl;




    return 0;
}

