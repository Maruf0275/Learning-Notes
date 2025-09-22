#include<iostream>
using namespace std;
int fibo(int n)
{
    if (n==1)
    {
        return 0;
    }
    else if (n==2)
    {
       return 1;
    }
    else
     return fibo(n-1)+fibo(n-2);
}
int main()
{
    int a;
    cout <<"Enter the value you want: ";
    cin>>a;
    int fibonacci= fibo(a);
    cout<<"the result is :"<<fibonacci;
    return 0;
}