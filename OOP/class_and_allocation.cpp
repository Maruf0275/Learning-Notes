#include <iostream>
using namespace std;

class Hero{
    private:
    int Health;
    public:
    char Level;
    
    int getHealth(){
        return Health;
    }
    void setHealth(int h){
        Health=h;
    }
};

int main()
{
    //dynamically allocation

    Hero *maruf=new Hero;
    maruf->setHealth(100);
    maruf->Level='A';
    cout<<"Health of Maruf is : "<<maruf->getHealth()<<endl;
    cout<<"Level of Maruf is : "<<maruf->Level<<endl;
    
    Hero *mahedi=new Hero;
    (*mahedi).setHealth(100);
    (*mahedi).Level='B';
    cout<<"Health of Mahedi is : "<<(*mahedi).getHealth()<<endl;
    cout<<"Level of Mahedi is : "<<(*mahedi).Level<<endl;

    //static allocation

    Hero h;
    cout<<"Size of Maruf is : "<<sizeof(maruf)<<endl;
    h.Level='C';
    h.setHealth(99);
    cout<<"Level is : "<<h.Level<<endl;
    cout<<"Health is : "<<h.getHealth()<<endl;
    return 0;
}
