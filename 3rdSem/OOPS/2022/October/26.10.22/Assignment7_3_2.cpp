//Class to Class type Conversion using Casting operator

#include<iostream>
using namespace std;

class A
{
    protected:
        int a,b;
    public:
        A(){}
        A(int x,int y)
        {
            a=x;
            b=y;
        }
        void show()
        {
            cout<<a<<endl<<b<<endl;
        }
};

class B
{
    protected:
        int m,n;
    public:
        void input()
        {
            cout<<"Enter Numbers\n";
            cin>>m>>n;
        }
        void show()
        {
            cout<<m<<endl<<n;
        }
        operator A()
        {
            A x(m,n);
            return x;
        }
};

int main()
{
    A a;
    B b;
    b.input();
    a=b;
    
    a.show();
    b.show();
    return 0;
}