#include<iostream>
using namespace std;
template <typename A>
A add(A a,A b)
{
    return (a+b);

}
int main()
{
    int x=10,y=20;
    cout<<"The Integer Addition is "<<add(x,y)<<endl;
    return 0;
}
