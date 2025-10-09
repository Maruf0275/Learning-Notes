#include <iostream>
using namespace std;

int main()
{
    char name[20];

    cout<<"Enter your name: ";
    gets(name);
    cout<<"Welcome "<<name;
    return 0;
}