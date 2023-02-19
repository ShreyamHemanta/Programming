#include <iostream>

using namespace std;

class operate
{
    private:
        int real1;
        int real2;
        int real3;
        int imag1;
        int imag2;
        int imag3;
    public:
        void input()
        {
            cout<<"For the 1st complex number :"<<endl;
            cout<<"Enter the real part : ";
            cin>>real1;
            cout<<"Enter the imaginary part : ";
            cin>>imag1;
            cout<<"\nFor the 2nd complex number :"<<endl;
            cout<<"Enter the real part : ";
            cin>>real2;
            cout<<"Enter the imaginary part : ";
            cin>>imag2;
        }
        void output()
        {
            cout<<"The 1st complex number is "<<real1<<"+"<<imag1<<"j"<<endl;
            cout<<"The 2nd complex number is "<<real2<<"+"<<imag2<<"j"<<endl;
        }
        void add()
        {
            real3=real1+real2;
            imag3=imag1+imag2;
            cout<<"The addition of the real numbers is : "<<real3<<"+"<<imag3<<"j"<<endl;
        }
        void sub()
        {
            if (real1>real2)
            {
                real3=real1-real2;
                imag3=imag1-imag2;
                cout<<"The substraction of the real numbers is : "<<real3<<"+"<<imag3<<"j"<<endl;
            }
            else
            {
                real3=real2-real1;
                imag3=imag1-imag2;
                cout<<"The substraction of the real numbers is : -"<<real3<<"+"<<imag3<<"j"<<endl;
            }
        }
};

int main()
{
    operate o;
    o.input();
    o.output();
    o.add();
    o.sub();
}