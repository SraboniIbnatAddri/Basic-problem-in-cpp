#include<iostream>
#include<conio.h>
using namespace std;

void func(int a, int b)
{
    int sum = a + b;
    cout<<"Sum = "<<sum<<endl;
}

void func(int a, int b,int c)
{
    int sum = a + b + c;
    cout<<"Sum = "<<sum<<endl;
}

int main()
{
    func(10,20);
    func(10,20,30);


    getch();
}
