/*

WAP which would contain array of objects [many objects], of a class Student. Student [Name, Age, Year, section, marks], the section would be A,B,C and D. Your program would be able to return the total marks of students in the college.

*/

#include<iostream>
#include<string>

using namespace std;
class student
{  //friend function array 
	private:
		string name;
		int marks;
		char sec;
	public:
	void set_values(string name,int m,char sec)
	{
	this->name=name;
	this->marks=m;
	this->sec=sec;
	}
	
	friend int get_marks(student obj);
};

int get_marks(student obj)
{
	return obj.marks;
}

int main()
{
	int n;
	cout<<"enter no. of students"<<endl;
	cin>>n;
	student arr[n];
	
  	for(int i=0;i<n;i++)
   	{
   		cout<<"enter name,marks and section of student "<<i+1<<endl;
   		int temp;
   		string name;
   		char sec;
   		cin>>name;
   		cin>>temp;
   		cin>>sec;
     		arr[i].set_values(name,temp,sec);
   	}
   	
	int sum=0;
	for(int i=0;i<n;i++)
  	{
    		cout<<get_marks(arr[i])<<" ";
		sum+=get_marks(arr[i]);
  	}
  	
 	cout<<sum;
}
