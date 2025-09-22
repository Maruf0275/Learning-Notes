#include <iostream>
using namespace std;

int maximum(int a,int b){
    if(a>b){
        return a;
    }
    else
        return b;
}

int main()
{
    int x,y, r;
    cin>>x>>y;
    r=maximum(x,y);
    cout<<"maximum :"<<r<<endl;
    
    return 0;
}