//displaying different types of data

#include <iostream>
using namespace std;

template <class A>

void display (A x)
{
    cout<<x<<endl;
}
int main ()
{
    display(5);
    display(6.2);
    display('A');
    return 0;
}