#include <iostream>
using namespace std;

int main()
{
int i, sum = 0;
for(i=0; i<=10 ;i++)
{
if(i%2==1)
continue;
sum += i;
}
cout<<sum;
return 0;
}