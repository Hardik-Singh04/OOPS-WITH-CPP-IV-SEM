#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	int N=15;
	string s,s2,s3;
	cout<<"Enter the sting with white spaces : ";
	getline(cin,s2);
	stringstream ss(s2);
	ss>>skipws>>s;
	ss>>noskipws>>s3;
	cout<<"hex : "<<hex<<N<<endl;
	cout<<"dec : "<<dec<<N<<endl;
	cout<<"skipws : "<<s<<endl;
	cout<<"noskipws : "<<s3<<endl;
	return 0;
}
