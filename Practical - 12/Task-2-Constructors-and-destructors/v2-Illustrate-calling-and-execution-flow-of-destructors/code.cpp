#include <iostream>
using namespace std;
class A
{
    public:
        ~A()
        {
            cout<<"Execution of Class A Destructor"<<endl;
        }
};
class B:public A
{
    public:
        ~B()
        {
            cout<<"Execution of Class B Destructor"<<endl;
        }
};
class C:public B
{
    public:
        ~C()
        {
            cout<<"Execution of Class C Destructor"<<endl;
        }
};
int main()
{
    C obj;
    cout<<endl<<"Default Destructor called as Program Ends"<<endl;
    return 0;
}
