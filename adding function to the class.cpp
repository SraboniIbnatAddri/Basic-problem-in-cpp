#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
      int age;
      double gpa;

      void display()
      {
          cout<< age <<" "<< gpa <<endl;
      }
};

int main()
{
    student Alim,Salma;
        Alim.age =22;
        Alim.gpa =3.42;
        Alim.display();

        Salma.age=54;
        Salma.gpa=3.09;
        Salma.display();


        getch();



}

