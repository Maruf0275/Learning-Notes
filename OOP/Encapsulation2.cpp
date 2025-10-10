#include <iostream>
using namespace std;

class Rectangle{
    private:
    double length;
    double width;

    void updateArea(){
        area = length*width;
    }
    void updatePerimeter(){
       perimeter = 2 * (length+width);
    }

    public:
    double area;
    double perimeter;

    Rectangle(double len,double wid){
        length = len;
        width = wid;
        updateArea();
        updatePerimeter();
    }
    double getlength(){
        return length;
    }
    double getwidth(){
        return width;
    }
    void setlength(double len){
        length = len;
        updateArea();
        updatePerimeter();
    }
    void setwidth(double wid){
        width = wid;
        updateArea();
        updatePerimeter();
    }


};

int main()
{
    cout<<"Initial Rectangle :"<<endl;
    Rectangle rect(2,3);
    cout<<"Length :"<<rect.getlength()<<endl;
    cout<<"Width :"<<rect.getwidth()<<endl;
    cout<<"Area :"<<rect.area<<endl;
    cout<<"Perimeter"<<rect.perimeter<<endl;

    cout<<endl<<"Modified Rectangle :"<<endl;
    rect.setlength(4);
    rect.setwidth(5);

    cout<<"Length :"<<rect.getlength()<<endl;
    cout<<"Width :"<<rect.getwidth()<<endl;
    cout<<"Area :"<<rect.area<<endl;
    cout<<"Perimeter"<<rect.perimeter<<endl;
    
    return 0;
}