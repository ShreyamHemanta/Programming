//Class to Primitive type Conversion

#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
        complex(){}
        complex(int x,int y)
        {
            a=x;
            b=y;
        }
        operator int()
        {
            return b;
        }
        void show()
        {
            cout<<a<<endl<<b;
        }
};

int main()
{
    complex c(5,6);
    int x;
    x=c;
    cout<<x<<endl;
    c.show();
    return 0;
}