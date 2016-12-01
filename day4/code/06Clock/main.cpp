#include <iostream>
#include <time.h>
#include <iomanip>
#include <unistd.h>

using namespace std;

//��ʼ������������ϵͳ���Ժ���߼����㼰��ʾ��ʵ��

class Clock
{
public:
    Clock()
    {
        time_t t = time(NULL);
        struct tm ti = *localtime(&t);  //struct tm *__cdecl localtime(const time_t *_Time)

        hour = ti.tm_hour;
        min = ti.tm_min;
        sec = ti.tm_sec;
    }

    void run()
    {
        while(1)
        {
            show();  //�����ʾ
            tick();  //���ݸ���
        }
    }


private:
    void show()
    {
        system("cls");
        cout<<setw(2)<<setfill('0')<<hour<<":";
        cout<<setw(2)<<setfill('0')<<min<<":";
        cout<<setw(2)<<setfill('0')<<sec;
    }

    void tick()
    {
        sleep(1);
        if(++sec == 60)
        {
            sec = 0;
            if(++min== 60)
            {
                min = 0;
                if(++hour == 24)
                {
                    hour = 0;
                }
            }
        }
    }

    int hour;
    int min;
    int sec;
};

int main()
{
    Clock c;
    c.run();
    return 0;
}


















