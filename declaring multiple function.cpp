#include<iostream>
using namespace std;

void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void devision(int,int);

int main()
{
    addition(10,10);
    subtraction(20,20);
    multiplication(10,30);
    devision(10,10);


}
void addition(int a,int b)
{
    int sum = a + b;
    cout<<"Sum = "<<sum<<endl;
}
void subtraction(int a,int b)
{
    int sub = a - b;
    cout<<"Sub = "<<sub<<endl;
}
void multiplication(int a,int b)
{
    int mul = a * b;
    cout<<"Multi = "<<mul<<endl;
}
void devision(int a,int b)
{
    float devi =(float) a / b;
    cout<<"Devision = "<<devi<<endl;
}

