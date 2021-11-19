/*WAP to create a directory that contains the following information.
(a) Name of a person
(b) Address
(c) Telephone Number (if available with STD code)
(d) Mobile Number (if available)
(e) Head of the family*/

#include<iostream>
#include<string>

using namespace std;
class student
{  //friend function array 
	private:
		string name;
		string address;
		long int telephone;
		long int Mobile_no;
		string head_of_family;
	public:
	void set_values(string name,string add,long int t, long int Mob, string head)
	{
	this->name=name;
	this->address=add;
	this->telephone=t;
	this->Mobile_no=Mob;
	this->head_of_family=head;
	}
	
	void display()
	{
		cout << name << endl;
		cout << address << endl;
		cout << telephone << endl;
		cout << Mobile_no << endl;
		cout << head_of_family << endl;
	}
	
};


int main()
{
	int n;
	cout<<"enter no. of Family"<<endl;
	cin>>n;
	student arr[n];
	
  	for(int i=0;i<n;i++)
   	{
   		cout<<"enter name,address, telephone , Mobile_no and head_of_family :\n "<<i+1<<endl;
   		string name;
		string address;
		long int telephone;
		long int Mobile_no;
		string head_of_family;
   		
   		cin>>name;
   		cin>>address;
   		cin>>telephone;
   		cin>>Mobile_no;
   		cin>>head_of_family;
     		arr[i].set_values(name,address,telephone,Mobile_no,head_of_family);
   	}
   	
   	for(int i=0;i<n;i++)
   	{
   		cout<<"\nDetails of Family "<<i+1<<endl;
   		arr[i].display();
   	}
   	
  	return 0;
 	
}
