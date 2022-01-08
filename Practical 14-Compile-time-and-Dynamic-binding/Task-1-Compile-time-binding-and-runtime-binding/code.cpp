#include<iostream>
using namespace std;
class Base
{
    public:
        //Virtual base class 
        //Late binding
        virtual int  add(int a,int b)
        {
            return (a+b);
        }
        //Early binding
        int multi(int a,int b)
        {
            return (a*b);
        } 
};
class Child:public Base
{
    public:
        int add(int a,int b)
        {
            return (a+b+1);
        }
};
int main()
{
    Base *p;
    Child c;
    p=&c;
    cout<<p->add(2,2)<<endl; //Early binding or compile time binding
    cout<<p->multi(2,3)<<endl;//Late binding or Dynamic binding
    return 0;
}
