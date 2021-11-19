/*
	WAP to count the total number of calls for a member function from more than one objects. [Lets say, from 3 such Objects]
*/
#include<iostream>
using namespace std;
class Member
{
	public:
		void name()
		{
			static int a=0;
			a++;
			cout<<"count for object is : "<<a<<endl;
		}
};
int main()
{	
	Member a,b,c;
	cout<<"object 'a' ";
	a.name();
	cout<<"object 'b' ";
	b.name();
	cout<<"object 'c' ";
	c.name();
	return 0;
}
