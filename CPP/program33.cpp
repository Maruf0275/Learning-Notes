#include<iostream>
using namespace std;

int fact(int n)
{
    if (n==1)
    {
        return 1;
    }else{
         return n*fact(n-1);
    }
}
int main()
{
    int a;
    cout <<"Enter the value you want: ";
    cin>>a;
    int factorial= fact(a);
    cout<<"The factorial of "<<a<<" is ="<<factorial<<endl;
    return 0;
}