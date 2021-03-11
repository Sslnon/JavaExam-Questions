#include<iostream>

using namespace std;

int c;

int cal(int a,int b)
{
	return 1;	
}

void print()
{
	cout<<c;
}

int main()
{
	int a,b;
	
	cin>>a>>b;
	c=cal(a,b);
	print(); 
	
	return 0;
}
