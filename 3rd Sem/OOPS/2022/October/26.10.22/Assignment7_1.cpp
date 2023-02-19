//Primitive to Class Type Conversion

#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
        complex(){}
        complex(int h)
        {
            a=h;
            b=0;
        }
        void show()
        {
            cout<<a<<endl<<b;
        }
};

int main()
{
    complex c;
    int x=20;
    c=x;
    c.show();
    return 0;
}