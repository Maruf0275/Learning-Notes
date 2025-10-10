#include <iostream>
#include <cstring> // Include for strcpy
using namespace std;

class Hero {
private:
    int Health;
public:
    char Level;
    string name;

    // Default constructor
    Hero() {
        cout << "Constructor called" << endl;
    }

    // Parameterized constructor
    Hero(int Health) {
        this->Health = Health;
    }
    Hero(int Health, char Level) {
        this->Health = Health;
        this->Level = Level;
    }

    // Copy constructor
    Hero(Hero &temp) {
        this->name = temp.name;
        this->Health = temp.Health;
        this->Level = temp.Level;
    }

    void print() {
        cout << endl;
        cout << "Name : " << this->name << endl;
        cout << "Health : " << this->Health << endl;
        cout << "Level : " << this->Level << endl;
        cout << endl;
    }

    int getHealth() {
        return Health;
    }
    void setHealth(int x) {
        Health = x;
    }
    char getLevel() {
        return Level;
    }
    void setLevel(char y) {
        Level = y;
    }
    void setName(string name) {
        this->name = name;
    }
};

int main() {
    Hero hero1;
    hero1.setHealth(100);
    hero1.setLevel('D');
    string name = "Maruf Hasan";
    hero1.setName(name);
    hero1.print();

    
    Hero hero2(hero1);
    hero2.print();

    hero1.name="Mahedi Hasan";
    hero1.print();

    hero2.print();

    // Changing name for hero1 won't affect hero2
    // Since we are using deep copy in the copy constructor
    // Also, there is no need to use character array for name

    return 0;
}
