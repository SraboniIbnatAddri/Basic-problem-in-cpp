#include<iostream>
#include<conio.h>
using namespace std;

class student
{
     int id;
     double gpa;

     void display()
     {
         cout<<id<<" "<<gpa<<endl;
     }

     void setvalue(int x,double y)
     {

           id = x;
           gpa = y;

     }
};

int main()
{
    student Alim,Suporna;

      Alim.setvalue(20,3.12);
      Alim.display();

      Suporna.setvalue(23,3.54);
      Suporna.display();

      getch();
}

