#include <iostream>
#include<string.h>
using namespace std;

class fuck{
public:
string name1;
string name2;

fuck(string a,string b){
this->name1=a;
this->name2=b;
}
// constant function
void print() const{
    cout<<"name is: "<<this->name1<<endl;
    cout<<"name is: "<<this->name2<<endl;
}
};

int main()
{
    //constant keyword 
    const fuck *r=new fuck("maruf","mahedi");
    //r->name1="aleen";
    r->print();
    delete r;

    return 0;
}