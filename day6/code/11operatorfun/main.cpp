#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#if 0
class Pow
{
public:
    int operator()(int i)
    {
        return i * i;
    }
};
int main()
{
    Pow pow;
    int i = 4;  //������󵱳ɺ�����һ��ʹ��  ��Ҫ����()
    cout<<pow.operator ()(i)<<endl; // pow(i);  a+b;    a + b;  �º���
    return 0;
}
#endif

bool myCmp(int i,int j)
{
    return i<j;
}

class Cmp
{
public:
    bool operator()(int i, int j)
    {
        return i<j;
    }
};

int main()
{
    int array[8] = {5,3,2,12,34,1,90,11};

    vector<int> vi(array,array+8);

    sort(vi.begin(), vi.end(),[=](int i,int j){return i<j;});  // lambda ���ʾ��Ƿº���

    for(int i=0; i<vi.size(); i++)
    {
        cout<<vi[i]<<endl;
    }


    return 0;
}

