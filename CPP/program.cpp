#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i==10)
        {
           continue;
        }
        cout<<"Bangladesh:"<<i<<endl;
    }
    
    return 0;
}