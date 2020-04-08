#include<iostream>
#include<conio.h>
using namespace std;

void display (int num[],int size)
{
    for(int i=0;i<5;i++)
        cout<<num[i]<<" ";
}

int main()
{
    int num[5]={10,12,13,14,16};
    display(num,5);
}
