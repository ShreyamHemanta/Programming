//Reverse A String

#include <iostream>

using namespace std;

int main()
{
    string a,b;
    int i;
    cout<<"Enter a String : ";
    cin>>a;
    for(i=a.length()-1;i>=0;i--)
    {
        b=b+a[i];
    }
    cout<<endl<<"The Reverse of the String is : "<<b;
    return 0;
}