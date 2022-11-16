//WAP to throw and handle division by zero exception

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    double t;
    cout<<"enter numbers ";
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
         t=(a/b);
         cout<<t<<endl;
        }
        else 
         throw b;
    }
    catch(int c)
    {
        cout<<"ERROR "<<c;
    }
    return 0;
} 