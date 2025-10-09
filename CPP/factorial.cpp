#include <iostream>
using namespace std;

int fact( int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int num;
    cout<<"Enter any number: "<<endl;
    cin>>num;
    int r;
    r=fact(num);
    cout<<"The value is: "<<r;
    return 0;
}