#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main()
{
    for(int i=1; i<=5; i++)
    {
        int randomnumber = rand()%5;
        cout<<"Random number= "<<randomnumber<<endl;
    }

    getch();
}
