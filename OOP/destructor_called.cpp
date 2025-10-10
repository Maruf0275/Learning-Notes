#include <iostream>
using namespace std;

class Hero{
public:
Hero(){
    cout<<"simple constructor called"<<endl;
}

~Hero(){
    cout<<"Destructor called"<<endl;
}

};

int main()
{
    //static allocation
    Hero a;
    
    //dynamically allocation
    Hero *b=new Hero;
    //manually destructor called
    delete b;

    return 0;
}