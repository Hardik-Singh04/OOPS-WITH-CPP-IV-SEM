#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int flag=0;
	cout<<"Enter the first string  :";
	getline(cin,s1);
	cout<<"Enter the second string :";
	getline(cin,s2);
	if(s1.length()!=s2.length())
	  {
		flag=flag+1;
	  }
	else
	  {
		for(int i=0 ;i<s1.length();i++)
	   	{
			if (s1[i]!=s2[i])
			{
			flag =flag+1;
			}
	        }	
		 if(flag>0)
		 {
	 		 cout<<"String are not equal."<<endl;
	 	 }
	 	 else
	 	 {
	 		 cout<<"String are equal"<<endl;
	 	 }
	 }
	return 0;
}
