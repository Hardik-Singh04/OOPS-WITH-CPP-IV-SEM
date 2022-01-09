#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
void printlist(list<int> g)
{
    //v1-Iterate a int list using iterator and print it 
    list<int>::iterator i;
    for(i=g.begin();i!=g.end();i++)
        cout<<" " <<*i;
    cout<<endl;
}
int main()
{
    list<int> a;
    for(int i=10;i>0;i--)
    {
        a.push_back(i);
    }
    cout<<"the list is  :";
    printlist(a);
    cout<<"size of list  :"<<a.size()<<endl;//v2-Find size of a list
    a.sort();//v3-Sort a list
    cout<<"sorted list   :";
    printlist(a);
    cout<<"reverse list  :";
    a.reverse();//v4-Reverse a list
    printlist(a);
    return 0;
}
