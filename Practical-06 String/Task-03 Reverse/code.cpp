#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str="GRAPHICERA";
	cout<<"1.Using Inbuilt function :"<<endl;
	cout<<"Before reversing :"<<str<<endl;
	reverse(str.begin(),str.end());
	cout<<str<<endl;
	string str1="HillUniversity";
	cout<<"2.Using own technique :"<<endl;
	int n=str1.length();
	cout<<"Before reversing :"<<str1<<endl;
	for(int i=n-1;i>=0;i--)
	{
		cout<<str1[i];
	}
	cout<<endl;
	return 0;
}
