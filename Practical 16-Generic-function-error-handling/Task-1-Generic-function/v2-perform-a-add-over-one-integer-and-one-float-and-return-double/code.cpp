#include<iostream>
#include<iomanip>
using namespace std;
template <typename A,typename B,typename C>
C add(A a,B b)
{
    return (a+b);

}
int main()
{
    int x=10;
    float y=20.301;
    cout<<"The Integer and float Addition is "<<setprecision(3)<<fixed<<add<int,float,double>(x,y)<<endl;
    return 0;
}
