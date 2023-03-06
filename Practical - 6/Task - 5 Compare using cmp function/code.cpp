#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str2;
	cout<<"Enter string in str1:";
	getline(cin,str1);
	cout<<"Enter string in str2:";
	getline(cin,str2);
	int x=str1.compare(str2);
	if(str1.length()!=str2.length())
	{
		cout<<"str1 and str2 are not equal and str1.compare(str2) will return "<<endl;
		cout<<x<<endl;
	}
	else
	{
		if(x>0)
		{
			cout<<"str1 is greater than str2 and str1.compare(str2) will return "<<x<<endl;
		}
		if(x<0)
		{
			cout<<"str1 is smaller than str2 and str1.compare(str2) will return "<<x<<endl;
		}
		if(x==0)
		{
			cout<<"str1 and str2 are equal and str1.compare(str2) will return "<<x<<endl;
		}
	}
	return 0;
}
