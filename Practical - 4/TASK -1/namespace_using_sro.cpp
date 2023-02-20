#include<iostream>
using namespace std;
namespace first
{
	int sum(int a,int b)
	{
		int sum=a+b;
		return sum;
	}
}
namespace second
{
	float sum(float a,float b)
	{
		float sum=a+b;
		return sum;
	}
}
int main()
{
	float a,b;
	cout<<"Enter two numbers :"<<endl;
	cin>>a>>b;
	cout<<"Integer Add="<<first::sum(a,b)<<endl;
	cout<<"Decimal Add="<<second::sum(a,b)<<endl;
	return 0;
}
