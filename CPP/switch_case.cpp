#include <iostream>
using namespace std;

int main()
{
int number;
cout<<"Enter any number: ";
cin>>number;
switch(number)
{
case 5:
cout<<"five"<<endl;
break;
case 9:
cout<<"nine"<<endl;
break;
case 13:
cout<<"thirteen"<<endl;
break;
default:
cout<<"others"<<endl;
    return 0;
}
}