#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int main()
{
	int choice;
	string ch,month,year,day,date;
	char c;
	time_t now=time(NULL);
	ch=ctime(&now);
	year=ch.substr(20,4);
	month=ch.substr(4,3);
	day=ch.substr(0,3);
	date=ch.substr(8,2);
	do
	{
		cout<<"Enter"<<endl<<"1-Year"<<endl<<"2-Month"<<endl<<"3-Day"<<endl<<"4-Date"<<endl<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<year<<endl;
				break;
			case 2:
				cout<<month<<endl;
				break;
			case 3:
				cout<<day<<endl;
				break;
			case 4:
				cout<<date<<endl;
				break;
			default:
				cout<<"You entered the wrong choice"<<endl;
		}
		cout<<"Would you like to continue if yes the type-Y/y and if not then type-N/n"<<endl;
		cin>>c;
	}while(c=='y' || c=='Y');
	return 0;
}