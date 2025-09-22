#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{   
    double base ,height,area;
    cout<<"Enter base: ";
    cin>>base;

    cout<<"Enter height: ";
    cin>>height;

    area=0.5*base*height;

    cout<<"The area of triangle is: "<<area;
    

    return 0;
}