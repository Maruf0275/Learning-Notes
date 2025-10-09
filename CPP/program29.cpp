#include<iostream>
using namespace std;

void add(int a,int b)
{
    int sum=a+b;
    cout<<"sum="<<sum<<endl;
}
void subtruction(int a,int b)
{
    int sub=a-b;
    cout<<"sub="<<sub<<endl;
}
void multiplication(int a,int b)
{
    int res=a*b;
    cout<<"multiplication="<<res<<endl;
}
void division(int a,int b)
{
    float res=(float)a/b;
    cout<<"division="<<res<<endl;
}
int main()
{
  int x,y;
  cout<<"Enter two number :";
  cin >>x>>y;

  add(x,y);
  subtruction(x,y);
  multiplication(x,y);
  division(x,y);
  return 0;
}