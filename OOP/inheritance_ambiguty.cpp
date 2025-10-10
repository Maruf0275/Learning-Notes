#include <iostream>
using namespace std;

//Inheritance Ambiguty
class A{
    public:
    void fun(){
        cout<<"Class A Called"<<endl;
    }
};

class B{
    public:
    void fun(){
        cout<<"Class B Called"<<endl;
    }
};

class C : public A,public B{

};

int main()
{
    C obj;

    //obj->fun();
    //Using scope resoulation operator 
    obj.A::fun();
    obj.B::fun();

    
    return 0;
}