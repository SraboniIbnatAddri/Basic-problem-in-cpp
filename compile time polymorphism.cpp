#include<iostream>
#include<conio.h>
using namespace std;

class print{
 public:
     void add(int a,int b,int c)
     {
         cout<<a+b+c<<endl;
     }

     void add(int a,int b)
     {
         cout<<a+b<<endl;
     }

     void add()
     {
         cout<<"Nothing to add"<<endl;
     }

};

int main(void)
{
    print oop;
    oop.add(10,20,30);
    oop.add(10,20);
    oop.add();

    getch();
}
