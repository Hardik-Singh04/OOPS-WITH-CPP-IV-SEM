#include<iostream>
using namespace std;
class Base
{
    public:
        Base()
        {
            cout<<"Base constructor"<<endl;
        }
        virtual ~Base()
        {
            cout<<"Base destructor"<<endl;
        }
};
class Child:public Base
{
    public:
        Child()
        {
            cout<<"Child constructor"<<endl;
        }
        ~Child()
        {
            cout<<"Child destructor"<<endl;
        }
};
int main()
{
    Base *p;
    Child c;
    p=&c;
    delete p;
    return 0;
}
