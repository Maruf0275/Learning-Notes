#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    for (int i = 1; i <=5; i++)
    {
         int random_Number=rand()%5+1;
         cout<<"Random number = "<<random_Number<<endl;
    }
    
    return 0;
}