#include<iostream>

using namespace std;

class area
{
    private:
        float rad,len,bre,hei,base;
        float ar;
    public:
        float arr(float,float);
        float arr(float,float,float);
        float arr(int,int,float);
        void input()
        {
            cout<<"Enter the radius of the circle : ";
            cin>>rad;
            cout<<"Enter the length of the rectangle : ";
            cin>>len;
            cout<<"Enter the breadth of the rectangle : ";
            cin>>bre;
            cout<<"Enter the base of the triangle : ";
            cin>>base;
            cout<<"Enter the height of the triangle : ";
            cin>>hei;
        }
        void output()
        {
            cout<<"The area of the circle is "<<arr(rad,ar);
            cout<<"\nThe area of the rectangle is "<<arr(len,bre,ar);
            cout<<"\nThe area of the triangle is "<<arr(hei,base,ar);
        }
};

float area::arr(float rad,float ar)
{
    ar=3.14*rad*rad;
    return(ar);
}

float area::arr(float len,float bre,float ar)
{
    ar=len*bre;
    return(ar);
}

float area::arr(int hei,int base,float ar)
{
    ar=0.5*base*hei;
    return (ar);
}


int main()
{
    area a;
    a.input();
    a.output();
    return 0;
}
