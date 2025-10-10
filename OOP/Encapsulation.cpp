#include <iostream>
#include<string.h>
using namespace std;

class student{
    private:
    string name;
    int age;
    int height;
    public:
    int getAge(){
        return this->age;
    }
};

int main()
{
    student first;
    cout<<"All is Right"<<endl;
    
    return 0;
}