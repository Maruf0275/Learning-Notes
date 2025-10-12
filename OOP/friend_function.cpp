#include <iostream>
using namespace std;

class Maruf{
    int area;
    public:
    Maruf(int a){
        area=a;
    }
    friend void printArea(Maruf x);
};

void printArea(Maruf x){
    cout<<"The Area is : "<<x.area<<endl;
}
int main()
{
    Maruf m(25);

    printArea(m);

    return 0;
}