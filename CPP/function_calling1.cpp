//function without arguments and without return value
#include <iostream>
using namespace std;

void maximum()
{
    int a,b;
    cin>>a>>b;
    if (a>b)
    {
       cout<<"maximum: "<<a<<endl;
    }
    else
    {
        cout<<"maximum: "<<b<<endl;
    }
}

int main()
{
    maximum();
    return 0;
}