//2+4+.....+N

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i,sum=0;

    cout<<"Enter the last number: ";
    cin>>num;

    for(i=2; i<=num; i+=2)
    {
        sum = sum + i;
    }

    cout<<sum;

    getch();
}

