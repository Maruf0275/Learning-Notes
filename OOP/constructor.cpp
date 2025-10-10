#include <iostream>
#include<conio.h>
using namespace std;

class maruf{
    int n;
    
    public:
        maruf(int m){
            n=30;
            cout<<n<<endl;
            cout<<m<<endl;
        }
        ~maruf(){
            cout<<"Distroyed"<<endl;
            cout<<n<<endl;
        }
};

int main()
{
    int b;
    cin>>b;
    maruf a(b);
    getch();
}