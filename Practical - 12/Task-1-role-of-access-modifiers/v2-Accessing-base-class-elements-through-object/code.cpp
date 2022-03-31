#include<iostream>
using namespace std;
class A
{
    private:
        int a;  //inaccessible through child object
    public:
        int b;
    protected:
        int c;  //inaccessible through child object
};
class B:public A
{
    public:
        void display()
        {
            cout<<"b="<<b<<endl;
        }
};
int main()
{
    B obj;
    obj.b=10;
    obj.display();
    return 0;
}
