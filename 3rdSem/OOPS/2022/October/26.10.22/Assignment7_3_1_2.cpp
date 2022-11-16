//Class to Class Type Conversion using Constructor

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
        int geta()
        {
            return a;
        }
        int getb()
        {
            return b;
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
        void copy(int obj1,int obj2)
        {
            m=obj1;
            n=obj2;
        }
        void show()
        {
            cout<<m<<endl<<n;
        }
};

int main()
{
    A a(5,6);
    B b;
    b.copy(a.geta(),a.getb());
    a.show();
    b.show();
    return 0;
}