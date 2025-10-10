#include <iostream>
#include<string.h>
using namespace std;

class Human{
    protected:
    int height;
    public:
    int weight;

    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }

};

class Male : protected Human{

    public:
    string color;
    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }

};

int main()
{
    Male m1;
    cout<<m1.getHeight()<<endl;

    //not accessable
    //cout<<m1.height<<endl;

    return 0;
}