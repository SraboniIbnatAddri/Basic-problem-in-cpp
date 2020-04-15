#include<iostream>
using namespace std;

template <class mytemplate>
mytemplate add(mytemplate a,mytemplate b)
{
    return a*b;
}


int main()
{
    cout<<add(10,2)<<endl;;
    cout<<add(22.2,13.5)<<endl;
}
