#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
      int age;
      double gpa;
};

int main()
{
    student Alim;
        Alim.age =22;
        Alim.gpa =3.42;

        cout<<Alim.age<<endl;
        cout<<Alim.gpa<<endl;

        getch();

}
