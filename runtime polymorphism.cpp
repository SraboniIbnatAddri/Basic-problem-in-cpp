#include<iostream>
#include<conio.h>
using namespace std;

class student{

public:
    void display()
    {
        cout<<"I am a student"<<endl;
    }
};

class sraboni:public student{

public:
    void display()
    {
        cout<<"I am Sraboni Ibnat Oddrija"<<endl;
    }
};

class mahmuda:public student{

public:
    void display()
    {
        cout<<"I am Mahmuda yeasmin"<<endl;
    }
};

int main(void){

   sraboni os;
   os.display();

   mahmuda ms;
   ms.display();

   getch();

}

