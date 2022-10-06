#include<iostream>
using namespace std;
class parent
{
    public:
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
            cout<<"Class child method called."<<endl;
        }
};
int main()
{
    child a;
    a.display_parent();
    return 0;
}
