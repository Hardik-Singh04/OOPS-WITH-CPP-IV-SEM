#include<iostream>
#include<cmath>
using namespace std;
void series(int n)
{
	if(n)
	{
	 	series(n-1);
		
	}
	else
	{
		return ;		
	}
	
	cout<<pow(n,n)+n<<",";
	
}
int main()
{
	int NUM;
	cout << "Enter value for which you want to print series: ";
	cin >> NUM;
	series(NUM);
	return 0;
}
