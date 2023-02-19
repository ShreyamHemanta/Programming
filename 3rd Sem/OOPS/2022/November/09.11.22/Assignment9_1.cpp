//Sorting of an array

#include <iostream>
using namespace std;

template <class A>

void sort (A x[])
{
    for(int i=0;i<5;i++)
            {
                for(int j=0;j<4-i;j++)
                {
                    if(x[j]<x[j+1])
                    {
                        A temp;
                        temp=x[j];
                        x[j]=x[j+1];
                        x[j]=temp;
                    }
                }
            }
    for(int i=0;i<5;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
int main ()
{
    int y[]={3,7,2,5,1};
    float z[]={3.2,5.0,1.0,3.1,0.5};
    sort(y);
    sort(z);
    return 0;
}