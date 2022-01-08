#include<iostream>
using namespace std;
class Base
{
    public:
        virtual int  add(int a,int b)
        {
            return (a+b);
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
    cout<<p->add(2,3)<<endl;
    return 0;
}
