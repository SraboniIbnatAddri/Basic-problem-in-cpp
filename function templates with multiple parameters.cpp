#include<iostream>
using namespace std;

template <class mytemplate1,class mytemplate2>
mytemplate1 add(mytemplate1 a,mytemplate2 b)
{
    return a*b;
}


int main()
{
    cout<<add(10.2,13)<<endl;;
    cout<<add(22,13.5)<<endl;
}

