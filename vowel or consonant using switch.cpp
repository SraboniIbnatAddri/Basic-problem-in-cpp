#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter any letter: ";
    cin>>ch;

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'O':
    case 'U':
    case 'I':
        cout<<"Vowel";
        break;
    default:
        cout<<"Consonant";
    }

    getch();
}

