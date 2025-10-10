#include <iostream>
using namespace std;

//Hierarchical Inheritance
class A{
    public:
    void funct1(){
        cout<<"Inside funtion 1"<<endl;
    }
};

class B : public A{
    public:
    void funct2(){
        cout<<"Inside funtion 2"<<endl;
    }
};

class C : public A{
    public:
    void funct3(){
        cout<<"Inside funtion 3"<<endl;
    }
};

int main()
{
    A a;
    a.funct1();

    B b;
    b.funct1();
    b.funct2();

    C c;
    c.funct1();
    c.funct3();
    
    return 0;
}