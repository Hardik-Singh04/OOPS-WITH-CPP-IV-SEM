#include<iostream>
using namespace std;
namespace first
{
	int Add(int a,int b)
	{
		int sum=a+b;
		return sum;
	}
}
namespace second
{
	float Add(float a,float b)
	{
		float sum=a+b;
		return sum;
	}
}
int main()
{
	float a,b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"Integer addition ="<<Add(a,b)<<endl;
	cout<<"Float addition ="<<Add(a,b)<<endl;
	return 0;
}
