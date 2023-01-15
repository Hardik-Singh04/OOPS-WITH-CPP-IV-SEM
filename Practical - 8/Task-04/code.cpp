#include<iostream>
using namespace std;

int fact(int a)
{
	if(a < 0)
		return 0;
	if(a == 0 || a == 1)
		return 1;
	
	int fact = 1;
	for(int i = 2; i <= a; i++)
		fact *= i;
	return fact;
}

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	
	cout << "Factorial of " << n << " is: " << fact(n) << endl;

	return 0;
}
