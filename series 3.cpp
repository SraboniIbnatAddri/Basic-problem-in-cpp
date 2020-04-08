//1^2+2^2+.......+n^2

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i,sum=0;

    cout<<"Enter the last number: ";
    cin>>num;

    for(i=1; i<=num; i++)
    {
        sum = sum + i*i;
    }

    cout<<sum;

    getch();
}
