#include<iostream>
using namespace std;
void Char()
{
	char a='b';
	cout<<"Char	  		"<<sizeof(a)<<" Byte"<<endl;
}
void Bool()
{
	bool a=true;
	cout<<"Bool 			"<<sizeof(a)<<" Byte"<<endl;
}
void Short()
{
	short a=6;
	cout<<"Short 			"<<sizeof(a)<<" Byte"<<endl;
}
void Int()
{
	int a=19;
	cout<<"Int 			"<<sizeof(a)<<" Byte"<<endl;
}
void Long()
{
	long a=134235;
	cout<<"Long	 		"<<sizeof(a)<<" Byte"<<endl;
}
void Float()
{
	float a=6.30;
	cout<<"Float 			"<<sizeof(a)<<" Byte"<<endl;
}
void Double()
{
	double a=15.99;
	cout<<"Double 			"<<sizeof(a)<<" Byte"<<endl;
}
void long_double()
{
	long double a=56.89787;
	cout<<"Long double	 	"<<sizeof(a)<<" Byte"<<endl;
}
void widechar()
{
	wchar_t a=L'ロ';
	cout<<"Wide char	 	"<<sizeof(a)<<" Byte"<<endl;
}
int main()
{
	cout<<"Size of all data types in your computer is:"<<endl;
	cout<<endl;
	cout<<"Data Types		Size"<<endl;
	cout<<endl;
	Char();
	Bool();
	Short();
	Int();
	Long();
	Float();
	Double();
	long_double();
	widechar();
	cout<<endl;
	return 0;
}
