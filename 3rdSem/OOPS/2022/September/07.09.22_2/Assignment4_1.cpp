#include <iostream>
using namespace std;

class complex
{
    private: 
        int real,imag;
    public:
        complex()
        {
            cout<<"Enter real part : ";
            cin>>real;
            cout<<"Enter Imaginary part : ";
            cin>>imag;
        }
        complex(int a,int b)
        {
            real=a;
            imag=b;
        }
        complex(complex &x)
        {
            real=x.real;
            imag=x.imag;
        }
        void display()
        {
            cout<<endl<<real<<"+"<<imag<<"j";
        }
        ~complex()
        {
            cout<<"\nDestructor called";
        }
};

int main()
{
    complex c1;
    c1.display();
    complex c2(5,6);
    c2.display();
    complex c3(c2);
    c3.display();
    return 0;
}