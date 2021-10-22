#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	
	swap(&a, &b);
	
	cout << "Value after swapping: " << endl << a << endl << b << endl;
	
	return 0;
}
