#include<iostream>
using namespace std;

void swap(int a, int b)
{
	int temp = b;
	b = a;
	a = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	
	swap(a,b);
	
	cout << "New value of a is: " << a <<endl;
	cout << "New value of b is: " << b << endl;
	
	return 0;
}
