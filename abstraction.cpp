#include<iostream>
#include<conio.h>
using namespace std;

class mobileuser{
public:
    virtual void sendMessage()=0;
};

    class rahim:public mobileuser{
    public:
        void sendMessage()
        {
            cout<<"I am Rahim"<<endl;
        }
    };

      class karim:public mobileuser{
    public:
        void sendMessage()
        {
            cout<<"I am Karim"<<endl;
        }
    };

int main(void)
{
    mobileuser *m;
    rahim r;
    karim k;

    m=&r;
    m->sendMessage();

    m=&k;
    m->sendMessage();


    getch();


}

