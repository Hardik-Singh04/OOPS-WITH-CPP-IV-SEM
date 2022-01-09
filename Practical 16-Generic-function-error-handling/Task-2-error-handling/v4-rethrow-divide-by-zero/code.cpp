#include <iostream>
using namespace std;
float Division(float num,float den)
{
    if(den==0) 
    {
        throw 0;
    }
    return(num/den);
}
int main()
{
    float numerator,denominator,result;
    cout<<"Enter numerator and denomenator respectively : ";
    cin>>numerator>>denominator;
    try 
    {
        try
        {
            if(denominator==0)
            {
                throw 0;
            }
        }
        catch(int x) 
        {
            cout<<"Can't divide a number by zero."<<endl;
        }
        result=Division(numerator,denominator);
        cout<<"The quotient is "<<result<<endl;
    }
    catch(int x) 
    {
        cout<<"Exception occurred"<<endl<<"Math error:Attempted to divide by Zero"<<endl;
    }
    return 0;
}
