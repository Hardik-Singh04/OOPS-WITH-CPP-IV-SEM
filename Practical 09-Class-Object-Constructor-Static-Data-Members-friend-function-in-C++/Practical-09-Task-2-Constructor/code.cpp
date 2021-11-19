/*
	WAP to create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters. The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing the area of square has one parameter which is the side of the square. Use multiple constructors to for the initialization.
*/
#include<iostream>
using namespace std;
class area
{
	public:
		void output(int l,int b)
		{
			cout<<"Area of Rectangel is = "<<l*b<<" meter square"<<endl;
		}
		void output(int s)
		{
			cout<<"Area of  square is = "<<s*s<<" meter square"<<endl;
		}
};
int main()
{
	int choice;
	cout<<"Enter"<<endl<<"1 to find the area of Rectangle"<<endl<<"2 to area of the Square"<<endl;
	cout<<"Enter your choice:";
	cin>>choice;
	area ob;
	switch(choice)
	{
		case 1:
			int l,b;
			cout<<"Enter the length of the rectangle :";
			cin>>l;
			cout<<"Enter the breadth of the rectangle :";
			cin>>b;
			ob.output(l,b);
			break;
		case 2:
			int s;
			cout<<"Enter the side of the square :";
			cin>>s;
			ob.output(s);
			break;
		default :
			cout<<"You entered the wrong choice :"<<endl;
	}
	return 0;
}
