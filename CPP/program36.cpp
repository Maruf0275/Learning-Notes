#include <iostream>
using namespace std;

int x=50;//global variable

int main()
{
    int x=30;//local variable
    cout<< ::x;
    return 0;
}