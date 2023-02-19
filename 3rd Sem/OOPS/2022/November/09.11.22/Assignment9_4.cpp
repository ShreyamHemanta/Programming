//displaying different types of data using class template

#include<iostream>
using namespace std;

template <class T>

class A
{
    T x,y;
    public:
        void input()
        {
            cin>>x>>y;
        }
        void show()
        {
            cout<<x<<" "<<y<<endl;
        }
};

int main()
{
    A <int> a;
    A <float> b;
    a.input();
    a.show();
    b.input();
    b.show();
    return 0;
}