//function without arguments and with return value
#include <iostream>
using namespace std;

int maximum()
{
    int a,b;
    cin>>a>>b;
    if (a>b)
       return a;
    else
        return b;
}

int main()
{
    int r;
    r=maximum();
    cout<<"maximum: "<<r;
    return 0;
}