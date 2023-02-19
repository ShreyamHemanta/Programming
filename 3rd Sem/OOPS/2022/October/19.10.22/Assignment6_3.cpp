/*Create a class which a complex number. Add two objects and display the resultant object.
Overload the ++ (post and pre) operator for the class.*/

#include<iostream>
using namespace std;

class complexno
{
    int real,imag;
    public:
        void input()
        {
            cout<<"Enter Real part : ";
            cin>>real;
            cout<<"Enter Imaginary part : ";
            cin>>imag;
        }
        friend complexno operator +(complexno a,complexno b);
        friend complexno operator ++(complexno a);
        void show()
        {
            cout<<real<<"+i"<<imag<<endl;
        }
};

complexno operator +(complexno a,complexno b)
{
    complexno temp;
    temp.real=a.real+b.real;
    temp.imag=a.imag+b.imag;
    return temp;
}
complexno operator ++(complexno a)
{
    complexno temp;
    int x;
    cout<<"Enter 1.Post Increament 2.Pre Increament : ";
    cin>>x;
    if(x==1)
    {
        temp.real=a.real++;
        temp.imag=a.imag++;
    }
    else if(x==2)
    {
        temp.real=++a.real;
        temp.imag=++a.imag;
    }
    return temp;
}

int main()
{
    complexno a,b,c,d;
    a.input();
    b.input();
    c=a+b;
    d=++a;
    a.show();
    b.show();
    c.show();
    d.show();
    return 0;
}