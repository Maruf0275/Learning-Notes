//function with arguments and with return value
#include <iostream>
using namespace std;

int maximum(int a,int b)
{
    if (a>b)
       return a;
    else
        return b;
}

int main()
{
    int r,a,b;
    cin>>a>>b;
    r= maximum(a,b);
    cout<<"maximum: "<<r;
    return 0;
}