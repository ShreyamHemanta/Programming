/* Create a class to store an integer array. Overload insertion and extraction operator to
input and display the array elements.*/

#include <iostream>
using namespace std;
class intarr
{
    int a[5];
    public:
    intarr operator >> (intarr x)
    {
        cout<<"Enter elements\n";
        for(int i=0;i<5;i++)
         cin>>x.a[i];
        return x;
    }
    intarr operator << (intarr x)
    {
        cout<<"Elements are\n";
        for(int i=0;i<5;i++)
         cout<<x.a[i]<<endl;
        return x;
    }
};
int main()
{
    intarr b;
    b>>b;
    b<<b;
    return 0;
}