/*WAP to overload following operators for class distance, which stores the distance in feet
and inches.
a) Binary + to
-add two objects (D3=D1+D2)
-Add an object to an integer, where the integer should be added to the
inches value ( D2=4+D1)
b) Unary -*/

#include<iostream>
using namespace std;

class D
{
    int f,i;
    public:
        void input()
        {
            cout<<"Enter distance in feet : ";
            cin>>f;
            cout<<"Enter distance in inches : ";
            cin>>i;
        }
        friend D operator + (D a,D b);
        friend D operator + (D a);
        friend D operator --(D a);
        void show()
        {
            cout<<f<<" feet "<<i<<" inches"<<endl;;
        }
};

D operator +(D a,D b)
{
    D temp;
    temp.f=a.f+b.f;
    temp.i=a.i+b.i;
    return temp;
}

D operator +(D a)
{
    D temp;
    int x;
    cout<<"Enter integer to add : ";
    cin>>x;
    temp.f=a.f+x;
    temp.i=a.i+x;
    return temp;
}

D operator --(D a)
{
    D temp;
    temp.f=a.f--;
    temp.i=a.i--;
    return temp;
}

int main()
{
    D x,y,z,m,n;
    x.input();
    y.input();
    z=z+y;
    m= +x;
    n=--x;
    x.show();
    y.show();
    z.show();
    m.show();
    n.show();
    return 0;
}