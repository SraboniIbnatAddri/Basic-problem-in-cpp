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

      student(int x,double y)
      {
          age = x;
          gpa = y;
      }
      student()
      {
          cout<<"Default constructor"<<endl;
      }
};

int main()

{
        student ob;

        student Alim(24,3.25);
        Alim.display();

        student Salma(22,3.05);
        Salma.display();


        getch();



}



