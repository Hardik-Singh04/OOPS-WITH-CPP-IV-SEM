#include<iostream>
using namespace std;
int main()
{
    int *p = {10,20,30};
    
    cout << *p;
    p++;
    cout << (*p);
    
    return 0;
}
