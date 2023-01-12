/*WAP to create print or display Student information containing in Student class by using pointers to object.*/

#include<iostream> 
using namespace std;
class student
{
	private:
		string name;
		string add;
		int roll_no;
		char sec;
	public:
	void set_values()
	{	
		getline(cin,name);
		getline(cin,add);
		cin>>roll_no;
		cin>>sec;
	}
	void show_data()
	{
		cout<<name<<" "<<add<<" "<<roll_no<<" "<<sec;
	}
};

int main()
{
	student *ptr;
	student obj1;
	ptr=&obj1;
	ptr->set_values();
	ptr->show_data();
	return 0;
}

