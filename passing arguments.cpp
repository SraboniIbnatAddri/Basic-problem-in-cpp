#include<iostream>
#include<conio.h>
using namespace std;

void displays(int *num)
{
    *num=20;
}


int main()
{
    int x = 10;
    cout<<"Before calling the function X is "<<x<<endl;


    displays(&x);
    cout<<"After calling the function X is "<<x<<endl;

    getch();

}
