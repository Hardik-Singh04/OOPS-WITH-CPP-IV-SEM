#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},
		       {4,5,6},
		       {7,8,9}};
	cout<<"The reverse of array is :"<<endl;
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cout<<10-arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
