#include <iostream>
#include<string.h>
using namespace std;

class A{
public:
void SayHello(){
    cout<<"Hello Maruf"<<endl;
}
void SayHello(string name){
    cout<<"Hello"<<name<<endl;
}
};

int main()
{
    A obj;
    obj.SayHello();
    obj.SayHello(" Maruf");
    
    return 0;
}