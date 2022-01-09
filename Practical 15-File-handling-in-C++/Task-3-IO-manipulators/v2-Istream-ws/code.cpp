#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream read;
    read.open("file.txt");
	string s;
	getline(read>>ws,s);
	cout<<"ws : "<<s<<endl;
	read.close();
	return 0;
}
