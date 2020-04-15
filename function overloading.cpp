#include<iostream>
#include<conio.h>
using namespace std;

class func
{
public:

    void print(int i)
    {
      cout<<"printing integer= "<<i<<endl;

    }
     void print(double f)
    {
      cout<<"printing float= "<<f<<endl;

    }
     void print(char*c)
    {
      cout<<"printing char= "<<c<<endl;

    }
};

    int main(void)
    {
       func ob;
       ob.print(10);
       ob.print(13.6);
       ob.print("Hello");


       getch();
    }

