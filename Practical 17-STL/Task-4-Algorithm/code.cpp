#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
    int array[]={36,59,60,29,63,12,19,30,1,7,5,56};
    int n=sizeof(array)/sizeof(array[0]);
    //v1-Covert Array into Vector
    vector<int>v(array,array+n);

    cout<<"The array is : ";
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";

    cout<<endl<<endl<<"The vector is : ";
    for(auto i=v.begin();i!=v.end();i++)
        cout<< *i << " ";
    
    //v2-Sort an Vector
    sort(v.begin(),v.end());
    cout<<endl<<endl<<"The vector after sorting : ";
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<" ";
      
    //v3-Reverse a vector  
    reverse(v.begin(),v.end());
    cout<<endl<<endl<<"The vector after reversing  : ";
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<" ";
    
    //v4-Max element in a Vector
    cout<<endl<<endl<<"Maximum element of vector is : ";
    cout<<*max_element(v.begin(),v.end());
    
    //v5-Min element in a Vector
    cout<<endl<<endl<<"Minimum element of vector is : ";
    cout<<*min_element(v.begin(),v.end());
    
    //v6-Occurrences of x in vector
    cout<<endl<<endl<<"The occurence of 56 in the vector is : "<<count(v.begin(),v.end(),56);
    
    
    //v7-Sort an Array
    sort(array,array+n);
    cout<<endl<<endl<<"The sorted array is : ";
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
    
    //v8-Binary Search in an Array
    cout<<endl<<endl<<"Searching for 56 : ";
    binary_search(array,array+n,56)?cout<<"Element found":cout<<"Element not found";
    cout<<endl;
    return 0;
}
