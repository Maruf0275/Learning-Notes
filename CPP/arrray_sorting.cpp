#include <iostream>
using namespace std;

int main()
{
    int i,j,temp;
    int array[5]={5,3,6,7,8};
    for ( i = 0; i < 5; i++)
    {
        for ( j = i+1; j < 5; j++)
        {
            if (array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
            
            
        }
        
    }
    cout<<"soted array is: "<<endl;
    for ( i = 0; i < 5; i++)
    {
        cout<<array[i]<<endl;
    }
    
    
    return 0;
}