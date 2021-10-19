#include<iostream>
using namespace std;
int main()
{
	int choice;
	cout<<"Program to print date,day,month and year"<<endl;
	cout<<"1.Year"<<endl<<"2.Month"<<endl<<"3.Date"<<endl<<"4.Day"<<endl<<"5.Exit"<<endl;
	cout<<"Input your choice :";
	cin>>choice;
	switch(choice)
	{
		case 1:cout<<"Current year is : 2021"<<endl;
			break;
		case 2:cout<<"Current month is : October"<<endl;
			break;
		case 3:cout<<"Current date is : 13th"<<endl;
			break;
		case 4:cout<<"Current day is : Wednesday"<<endl;
			break;
		default:cout<<"You entered wrong choice.."<<endl;
	}
	return 0;
}
