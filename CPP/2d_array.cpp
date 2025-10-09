#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int arr[2][3];
    cout<<"Enter the number: "<<endl;
    for ( i = 0; i < 2; i++)
    {
       for ( j = 0; j <3; j++)
       {
        cin>>arr[i][j];
       }
    }
    for ( i = 0; i < 2; i++)
    {
       for ( j = 0; j <3; j++)
       {
        cout<<"numbers["<<i<<"]["<<j<<"] = "<<arr[i][j]<<endl;
       }
    }
    return 0;
}