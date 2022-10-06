#include<iostream>
using namespace std;
class parent
{
    protected:
        void display_parent()
        {
            cout<<"Class parent method called." << endl;
        }
};
class child : public parent
{
    public:
        void display_child()
        {
            cout<<"Calling of class parent method from class child method without creating the object of class parent" << endl;
            display_parent();
        }
};
int main()
{
    child a;
    a.display_child();
    return 0;
}
