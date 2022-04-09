#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream write;
	ifstream read;
	string s,s2;
	cout<<"Enter the string : ";
	getline(cin,s);
	write.open("file.txt");
	write<<s;
	write.close();
	read.open("file.txt");
	getline(read,s2);
	read.close();
	cout<<"Content of file is : ";
	cout<<s2<<endl;
}
