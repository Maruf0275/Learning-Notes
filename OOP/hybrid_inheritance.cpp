#include <iostream>
using namespace std;

//Hybrid Inheritance
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

class D{
    public:
    void funct4(){
        cout<<"Inside funtion 4"<<endl;
    }
};

class C : public A,public D{
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
    c.funct4();

    D d;
    d.funct4();
    
    return 0;
}