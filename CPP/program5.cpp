#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    float num1,num2;
    cout<<setw(20)<<"Enter 2 number: ";
    cin >> num1 >> num2;

    cout<<noshowpoint;
    float sum = num1 + num2;
    cout<<setw(20) <<"sum is: "<<sum<<endl;
    
    cout<<noshowpoint;
    float sub =num1-num2;
    cout<<setw(20)<<"subtraction is: "<<sub<<endl;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    float mul =num1*num2;
    cout<<setw(20)<<"Multipication is: "<<mul<<endl;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    float div = num1/num2;
    cout<<setw(20)<<"Division is : "<<div;

    return 0;
}