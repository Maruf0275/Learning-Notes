#include<iostream>
using namespace std;
void find_max(int a, int b)
{
	if (a>b)
	cout<<a<<endl;

	else
		cout<<b<<endl;
}


int main()
{
	int a,b;
	cin>>a>>b;
	find_max(a,b);
	return 0;
}