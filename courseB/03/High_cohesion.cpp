#include<iostream>
// 对代码内容进行模块化
// 从而可维护性高
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
