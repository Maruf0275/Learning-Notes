#include<iostream>
using namespace std;

void display_array(int num[],int array_size)
{
    for(int i=0;i<array_size;i++){
    cout<<num[i]<<" ";
    }
}
int main()
{
    int number[5]={1,2,3,4,5,};
    display_array(number,5);
}