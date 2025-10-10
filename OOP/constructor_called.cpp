#include <iostream>
#include<string.h>
using namespace std;

class Hero{
    private:
    int Health;
    public:
    char Level;
    char *name;

    // default constructor
    Hero(){
        cout<<"Constructor called"<<endl;
        name=new char[100];
    }

    // parameterised constructor
    //This Pointer
    Hero(int Health){
        this->Health=Health;
    }
    Hero(int Health,char Level){
        this->Health=Health;
        this->Level=Level;
    }

    //Deep copy constructor
    Hero(Hero &temp){
        
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;

        this->Health=temp.Health;
        this->Level=temp.Level;
    }

    void print(){
        cout<<endl;
        cout<<"Name : "<<this->name<<endl;
        cout<<"Health : "<<this->Health<<endl;
        cout<<"Level : "<<this->Level<<endl;
        cout<<endl;
    }
    
    int getHealth(){
        return Health;
    }
    void setHealth(int x){
        Health=x;
    }
    int getLevel(){
        return Level;
    }
    void setLevel(int y){
        Level=y;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
};

int main()
{
    Hero hero1;
    hero1.setHealth(100);
    hero1.setLevel('D');
    char name[20]="Maruf Hasan";
    hero1.setName(name);
    hero1.print();

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0]='F';
    hero1.print();

    hero2.print();




    // Hero maruf(20);
    // cout<<"address fo maruf is : "<<&maruf<<endl;
    // maruf.getHealth();

    // //dynamically allocation
    // Hero *maruf=new Hero;
    // maruf->setHealth(100);
    // maruf->Level='A';
    // cout<<"Health of Maruf is : "<<maruf->getHealth()<<endl;
    // cout<<"Level of Maruf is : "<<maruf->Level<<endl;
    
    // Hero *mahedi=new Hero;
    // (*mahedi).setHealth(100);
    // (*mahedi).Level='B';
    // cout<<"Health of Mahedi is : "<<(*mahedi).getHealth()<<endl;
    // cout<<"Level of Mahedi is : "<<(*mahedi).Level<<endl;

    // //static allocation

    // Hero h;
    // cout<<"Size of Maruf is : "<<sizeof(maruf)<<endl;
    // h.Level='C';
    // h.setHealth(99);
    // cout<<"Level is : "<<h.Level<<endl;
    // cout<<"Health is : "<<h.getHealth()<<endl;
    return 0;
}
