//WAP to throw and handle array out of bound exception

#include <iostream>
using namespace std;

int main()
{
    int arr[5],i=0,j=0;
    try
    {
        while(i<10)
        {
            if(i<5)
            {
                cout<<"enter value ";
                cin>>arr[i];
                i++;
            }
            else
            {
                throw 'p';
            }
        }
    }
    catch(char e)
    {
        cout<<"Array out of bound exceptions";
    }
    return 0;
}