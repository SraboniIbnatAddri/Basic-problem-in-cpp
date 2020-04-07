#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2;

    cout<<"Enter two number: ";
    cin>>num1>>num2;


    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);

    float sum=num1+num2;
    cout<<setw(20)<<"sum is: "<<sum<<endl;

     float sub=num1-num2;
    cout<<"subtraction is: "<<sub<<endl;

     float mul=num1*num2;
    cout<<"multiplication is: "<<mul<<endl;

    double div=(float)num1/num2;
    cout<<"division is: "<<div<<endl;

    getch();
}

