#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	str = "Hello";
	cout<<"Address Before:"<<&str<<endl;
	cout << str << endl;
	
	str[0] = 'J';
	cout<<"Address after :"<<&str<<endl;
	cout << str << endl;
	return 0;
}
