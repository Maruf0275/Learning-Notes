#include<iostream> 
#include<stdlib.h>
using namespace std;
int main()
{

    int guess_number,random_Number;

    cout<<"Enter your guess between 1 to 5: ";
    cin>>guess_number;

    random_Number=rand()%5+1;
    if (guess_number==random_Number)
    {
        cout<<"You have won"<<endl<<endl;
    }
    else{
        cout<<"You have lost"<<endl;
        cout <<"Random number was : "<<random_Number<<endl;
    }
    return 0;
   
 }