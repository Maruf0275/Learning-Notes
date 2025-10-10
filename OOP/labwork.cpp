#include <iostream>
using namespace std;

class Base1 {
public:
    void display1() {
        cout << "Displaying from Base1" << endl;
    }
};

class Base2 {
public:
    void display2() {
        cout << "Displaying from Base2" << endl;
    }
};
class Derived : public Base1, public Base2 {
public:
    void displayDerived() {
        cout << "Displaying from Derived" << endl;
    }
};

int main() {
    Derived obj;
    obj.display1();
    obj.display2();
    obj.displayDerived();
    return 0;
}