#include <iostream>
#include <string>
using namespace std;
class Base
{
    public:
        //This will not be visible to the object of chid class as it has been overrided in the child class
        int add(int a, int b)
        {
            return a+b;
        }
        float add(float a, float b)
        {
            return a+b;
        }
};
class Child:public Base
{
    public:
        using Base::add;
        int add(int a, int b)
        {
            return a+b+1;
        }
};
int main()
{
    Child a;
    cout<<a.add(1,2)<<endl;
    cout<<a.add(1.1f,2.2f)<<endl;
    return 0;
}
