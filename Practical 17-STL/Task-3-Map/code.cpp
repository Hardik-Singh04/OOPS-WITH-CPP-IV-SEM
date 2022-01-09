#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<int,string> a;
    //v1-Insert elements into a <int, string> map
    //v2-Insert elements in random order
    a.insert(pair<int,string>(1,"name"));
    a.insert(pair<int,string>(5,"Hardik"));
    a.insert({2,"is"});
    a.insert({0,"My"});
    a.insert({10,"Singh"});
    
    //v3-Iterate this map using iterator and print its keys and values
    map<int,string>::iterator i;
    cout<<"Elements of the maps are :"<<endl;
    cout<<"keys\tvalue"<<endl;
    for(i=a.begin();i!=a.end();i++)
    {
        cout<<i->first<<"\t"<<i->second<<endl;
    }
    
    //v4-Find an element as key from this map
    cout<<endl<<"finding the element with key 10 :"<<endl;
    cout<<"keys\tvalue"<<endl;
    for(auto it=a.find(10);it!=a.end();it++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }
    
    //v5-Assigning the elements from map1 to map2
    map<int,string>b(a.begin(),a.end());
    cout<<endl<<endl<<"The map after assigning the values from a to b :"<<endl;
    cout<<"keys\tvalues"<<endl;
    for(auto j=b.begin();j!=b.end();j++)
    {
        cout<<j->first<<"\t"<<j->second<<endl;
    }
    
    //v6-Remove all elements with key = x (any key present in map)
    b.erase(5);
    cout<<endl<<endl<<"After removing element with key 5 in b"<<endl;
    cout<<"keys\tvalue"<<endl;
    for(auto j=b.begin();j!=b.end();j++)
    {
        cout<<j->first<<"\t"<<j->second<<endl;
    }
    
    //v7-Find size, max size of a map
    cout<<"size of map a : "<<a.size()<<endl;
    cout<<"max size of map a : "<<a.max_size()<<endl;
    
    //v8-Checks if this map is empty or not
    if(a.empty())
        cout<<endl<<"the map is empty"<<endl;
    else
        cout<<endl<<"the map is not empty"<<endl;
    
    //v9-Clear a map
    b.clear();
    cout<<"the map b after clear "<<endl<<"keys\tvalue"<<endl;
    for(auto j=b.begin();j!=b.end();j++)
    {
        cout<<j->first<<"\t"<<j->second<<endl;
    }
    cout<<endl<<endl;
    return 0;
}
