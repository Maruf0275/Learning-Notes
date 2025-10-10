#include <iostream>
using namespace std;
class Hero{
public:
int a;
int b;
//initialization list
//an initialization list is a special syntax used in the constructor definition of a class to initialize member variables before the constructor body executes. 
//It allows you to specify initial values for member variables directly when the object is constructed.
    Hero(int i, int j) : a(i), b(j*2){
        cout << "constructor executed" << endl;
    }
    void print(){
        cout << a << endl;
        cout << b <<endl;
    }
};

int main()
{
    int x,y;
    cin>>x>>y;
    Hero *c=new Hero(x,y);
    c->print();
    delete c;
    return 0;
}