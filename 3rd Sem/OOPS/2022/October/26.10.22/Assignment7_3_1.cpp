//Class to Class Type Conversion using Constructor(copy constructors)

#include<iostream>
using namespace std;

class A
{
    public:
        int x,y;
        A(){}
        A(int a, int b)
        {
            x=a;
            y=b;
        }
        void show()
        {
            cout<<x<<endl<<y<<endl;
        }
};

class B
{
    public:
        int m,n;
        B(){}
        B(A &a)
        {
            m=a.x;
            n=a.y;
        }
        void show()
        {
            cout<<m<<endl<<n;
        }
};

int main()
{
    A aa(5,6);
    B bb(aa);
    aa.show();
    bb.show();
    return 0;
}