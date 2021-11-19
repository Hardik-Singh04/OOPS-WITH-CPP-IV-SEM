/*
	WAP which would perform these tasks of your data:
a. Come to next line
b. set minimum field width
c. fill string with (*) after setw(15) function
    **********1234
by using endl, setw, and setfill [Manipulators in C++] 
*/
#include<iostream>
#include <iomanip>
using namespace std;
int main()
{	//Come to next line
	cout<<"Line 1"<<endl<<"Line 2"<<endl;

	//set minimum field width
	cout<<setw(10)<<5<<endl;

	//fill string with (*) after setw(15) function
	cout<<setfill('*')<<setw(15)<<1234<<endl;
	return 0;
}
