#include<iostream>
#include<conio.h>
using namespace std;

class student
{
private:
    string name;

public:
    void setname(string x)
    {
        name=x;
    }

    string getname()
    {
        return name;
    }
};



int main()
{
    student s;
    s.setname("Oddrija");
    cout<<s.getname();

    getch;
}
