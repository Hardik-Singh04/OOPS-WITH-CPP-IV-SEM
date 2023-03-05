#include<iostream>
#include<string>
using namespace std;
void both_integers(int a,int b)
{
  int sum=a+b;
   cout<<"Sum of two numbers :"<<sum;
}
void both_strings(string str,string str1)
{
	string sum;
	sum=str+str1;
	cout<<sum;	
}
void both_together(int a,string str)
{
	int sum=a+str;
	string sum1=a+str;
	cout<<"In Integer :"<<sum;
	cout<<"In string :"<<sum1;
}
int main()
{
   int a=7,b=10;
   string str="Graphic",str1="University";	
   both_integers(a,b);
   both_strings(str,str1);
   both_together(a,str);
   return 0;
}
