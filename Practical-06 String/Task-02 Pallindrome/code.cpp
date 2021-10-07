#include<bits/stdc++.h>
using namespace std;
void Pallindrome(string str)
{
	string temp;
	temp=str;
	reverse(temp.begin(),temp.end());
	if(str==temp)
	{
		cout<<"Pallindrome"<<endl;
	}
	else
	{
		cout<<"Not Pallindrome"<<endl;
	}
	
}
int main()
{
	string str;
	cout<<"Enter the string :";
	cin>>str;
	Pallindrome(str);
	return 0;
}
