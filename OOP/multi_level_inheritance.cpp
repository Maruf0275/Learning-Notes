#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal{

};

//multi level inheritance
class cat : public Dog{

};

int main()
{
    cat d;
    d.speak();
    return 0;
}