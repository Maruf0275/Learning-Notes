#include <iostream>
using namespace std;

int main()
{
    int sum=0,i=0;
   do
   {
    sum=sum+i;
    cout<<" "<<i<<endl;
    i++;
   } while (i<5);
   
    cout<<"the sum is : "<<sum;
    return 0;
}