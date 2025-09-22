#include<iostream>
using namespace std;
int main()
{
    int array[50],i;
    cout<<"Enter the elements: ";
    for(i=0;i<5;i++)
    {
        cin>>array[i];
    }
    cout<<"Elements are: ";
    for(i=0;i<5;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}