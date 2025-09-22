//function with arguments and without return value
#include <iostream>
using namespace std;

void maximum(int a,int b)
{
    if (a>b)
       cout<<"maximum: "<<a<<endl;
    else
        cout<<"maximum: "<<b<<endl;
}

int main()
{
    int a,b;
    cin>>a>>b;
    maximum(a,b);
    return 0;
}