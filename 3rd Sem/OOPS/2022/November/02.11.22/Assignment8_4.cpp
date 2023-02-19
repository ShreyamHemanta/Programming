//Implementation of pure virtual function and abstract class

#include <iostream>
using namespace std;

class A
{
    protected:
        int x;
    public:
        virtual void input() = 0;
        virtual void display() = 0;
};

class B : public A
{
    public:
        void input()
        {
            cout<<"Enter a number : ";
            cin>>x;
        }
        void display()
        {
            cout<<x;
        }
};

int main()
{
    A *a;
    B b;
    a=&b;
    a -> input();
    a -> display();
    return 0;
}