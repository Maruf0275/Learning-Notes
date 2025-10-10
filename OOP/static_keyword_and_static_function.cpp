#include <iostream>
using namespace std;
class Hero{
public:

//static keyword
static int TimeToComplete;

//static function
static int random(){
    return TimeToComplete;
}

};

//static initialization
int Hero::TimeToComplete=5;

int main()
{
    //static output 
    cout<<Hero::TimeToComplete<<endl;
    cout<<Hero::random()<<endl;
    return 0;
}