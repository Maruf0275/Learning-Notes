#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout << "Enter 3 Number: ";
    cin >> num1 >> num2 >> num3;

    if(num1>num2 && num1>num3)
    {
        cout<<"The large number is: "<<num1;
    }
     else if(num2>num1 && num2>num3)
    {
        cout<<"The large number is: "<<num2;
    }
    else
    {
        cout<<"The large number is: "<<num3;
    }
    return 0;
}