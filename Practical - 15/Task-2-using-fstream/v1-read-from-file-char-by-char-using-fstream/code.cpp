#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream read;
	char s;
	read.open("file.txt");
	cout<<"Characters from the file are : ";
	while(read>>s)
	{
		cout<<s<<" ";
	}
	cout<<endl;
	read.close();
}
