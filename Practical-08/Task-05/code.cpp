#include<iostream>
using namespace std;

int fact(int a)
{
	if(a == 0 || a == 1)
		return 1;
		
	if(a > 1)
		return a*fact(a-1);
	return 1;
} 	

int main()
{
	int a;
	cout << "Enter value: ";
	cin >> a;
	
	if(a < 0)
	{
		cout << "Enter valid number" << endl;
	}
	
	if(a == 0 || a == 1)
	{
		cout << "Factorial of " << a << " is 1" << endl;
	}
	else
	{
		cout << "Factorial of " << a << " is: " << fact(a) << endl;
	}
	 
	return 0;
}
	
