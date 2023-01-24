/*
WAP in which you create a Student class having basic information for each student, like name, age and marks. By using friend function add marks of all the students [lets say 3 objects] and print it.
*/

#include<iostream>
#include<string.h>
using namespace std;

class student
{
	private:
		string name;
		int marks;
		char sec;
	public:
		student(string name,int m,char sec)
		{
			this->name=name;
			this->marks=m;
			this->sec=sec;
		}
	friend int get_marks(student);
};

int get_marks(student obj)
{
	return obj.marks;
}

int main()
{
	student obj1("swati",99,'A');
	student obj2("shivi",84,'B');
	student obj3("sneha",78,'C');
	int sum=0;
	sum+=get_marks(obj1);
	sum+=get_marks(obj2);
	sum+=get_marks(obj3);
	cout<<"total sum of all students marks : "<<sum;
	return 0;
}
