/*
    WAP to pass two variables in a parameterized constructor during object creation and have same names variables as class member data and constructor parameters.
    Your job is to calculate the remainder of those two numbers.
*/
#include<iostream>
using namespace std;
class Remainder
{
    private:
        int a,b,rem;
    public:
        Remainder(int a,int b)
        {
            this->a=a;
            this->b=b;
            this->rem=a%b;
        }
        int getrem(Remainder s)
        {
            return s.rem;
        }
};
int main()
{
    int a,b;
    cout<<"Enter two numbers to find out the remainder :"<<endl;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    Remainder s(a,b);
    cout<<"Remainder of "<<a<<"/"<<b<<" = "<<s.getrem(s)<<endl;
    return 0;
}