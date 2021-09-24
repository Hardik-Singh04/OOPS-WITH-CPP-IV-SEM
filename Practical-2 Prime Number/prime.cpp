#include<iostream>
float squareroot(float n)
{
	float x=n;
	float y=1;
	float e= 0.000001;
	while(x-y>e)
	{
		x=(x+y)/2;
		y=n/x;
	}
	return x;
}
int isPrime(int n)
{
	for(int i=2;i<=squareroot(n);i++)
	{
		if(n%i==0)
		{
			return 1;
		}

	}
	return 0;
}
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number to check if the number is prime or not\n";
	cin>>n;
	if(isPrime(n)==0)
	{
		cout<<n<<" is prime number\n";
	}
	else
	{
		cout<<n<<" is not prime\n";
	}
	return 0;
	
}
