#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,i;
    cout<<"enter the last number: ";
    cin >>n;
    for( i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}