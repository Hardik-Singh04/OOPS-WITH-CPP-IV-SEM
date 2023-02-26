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
using namespace first;
using namespace second;
int main()
{
	cout<<"Integer addition ="<<Add(2,2)<<endl;
	cout<<"Float addition ="<<Add(2.45,2.345)<<endl;
	cout<<"Mixed values ="<<Add(6.466,7)<<endl;
	cout<<"Mixed values ="<<Add(7,61.308)<<endl;
	return 0;
}
