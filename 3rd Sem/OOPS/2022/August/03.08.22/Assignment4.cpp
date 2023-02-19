#include <iostream>

using namespace std;

class complex_no 
{
    private:
        int imag[10];
        int real[10];
    public:
        void input()
        {
            for(int i=0;i<10;i++)
            {
                cout<<"\nNumber  "<<i+1<<" : "<<endl;
                cout<<"Enter the Real part : ";
                cin>>real[i];
                cout<<"Enter the Imaginary part : ";
                cin>>imag[i];
            }
        }
        void output()
        {
            for(int i=0;i<10;i++)
            {
                cout<<"Complex Number "<<i+1<<"  : ";
                cout<<real[i]<<"+"<<imag[i]<<"j"<<endl;
            }
        }
};

int main()
{
    complex_no c;
    c.input();
    c.output();
    return 0;
}