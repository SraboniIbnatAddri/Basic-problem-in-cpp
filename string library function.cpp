#include<iostream>
#include<cstring>
using namespace std;
int main()
{
     char name1[]="Oddrija";
     char name2[]="Sraboni";

    int len = strlen(name1);
    cout<<"length of string: "<<len<<endl;

    strcpy(name2,name1);
    cout<<"name2: "<<name2<<endl;

    strcat(name1,name2);
    cout<<name1<<endl;

    return 0;
}

