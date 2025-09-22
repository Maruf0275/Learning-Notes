#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter 2 number: ";
    cin>>num1>>num2;
    if(num1>num2)
    {
        cout<<"large num1: "<<num1;
    }
    else
    {
        cout<<"large num2: "<<num2;
    }

    return 0;
}