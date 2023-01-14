#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	
	int *p = &a;
	int **q = &p;
		
	cout << *p << endl;
	cout << **q << endl;
	
	**q = 20;
	
	cout << *p << endl;
	cout << **q << endl;
	
	return 0;
}
	
