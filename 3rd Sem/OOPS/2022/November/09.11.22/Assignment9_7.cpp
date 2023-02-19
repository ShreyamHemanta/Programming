//WAP to demonstrate multiple catch and catch all

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter numbers";
    cin>>a>>b;
    int t=a-b;
    try
    {
        if(t>0)
        {
         t=(a/t);
         cout<<t<<endl;
        }
        else if(t<0)
            throw ('n');
        else
            throw (t);
    }
    catch(int c)
    {
        cout<<"ERROR "<<c;
    }
    catch(char ch)
    {
        cout<<"ERROR  it is negetive";
    }
    return 0;
}