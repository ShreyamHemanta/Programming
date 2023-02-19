//Power of a Number

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<endl<<"Enter 2nd Number : ";
    cin>>b;
    d=1;
    for(c=b;c>=1;c--)
    {
        d=d*a;
    }
    cout<<endl<<"The Final Answer Is : "<<d;
}