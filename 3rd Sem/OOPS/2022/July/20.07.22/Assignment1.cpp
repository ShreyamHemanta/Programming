//Factorial of a Number using Recussion

#include <iostream>

using namespace std;

int fact(int i)
{
    int j;
    if (i<=1)
    {
        return 1;
    }
    j=i*fact(i-1);
    return j;
}
int main()
{
    int i,k;
    cout<<"Enter a Number"<<endl;
    cin>>i;
    k=fact(i);
    cout<<"The Factorial of the number is :"<<k;
    return 0;
}