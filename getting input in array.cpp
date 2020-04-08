#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks[5],i;

    for(i=0; i<5; i++)
    {
        cout<<"Marks for student "<<i+1<<" = ";
        cin>>marks[i];

    }

    cout<<endl;

    cout<<"Marks are: ";

    for( i=0;i<5;i++)
    {
        cout<<marks[i]<<" ";
    }
    getch();
}

