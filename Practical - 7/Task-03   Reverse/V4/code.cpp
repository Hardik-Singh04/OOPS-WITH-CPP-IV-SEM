#include<iostream>
using namespace std;
int main()
{
  int m;
  cout<<"enter the rows : \n";
  cin>>m;
  int a[m][m];
  cout<<"enter the elements :\n";
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
  }
 cout<<"\nthe elements after reversing are : \n";
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      a[i][j]=10-a[i][j];
    }
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}
