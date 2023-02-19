/*Create a class ‘shape’. Derive three classes from it: Circle, Triangle and Rectangle.
Include the relevant data members and functions in all the classes. Find the area of each
shape and display it.*/

#include<iostream>
using namespace std;

class shape
{
    protected:
        float area;
};

class circle:protected shape
{
    protected:
        int rad;
    public:
        void input()
        {
            cout<<"Enter Radius of the Circle: ";
            cin>>rad;
        }
        void display()
        {
            area=3.14*rad*rad;
            cout<<"Area of the Circle: "<<area<<endl;
        }
};

class triangle:protected shape
{
    protected:
        int base,height;
    public:
        void input()
        {
            cout<<"Enter Base of the Triangle: ";
            cin>>base;
            cout<<"Enter Height of the Triangle: ";
            cin>>height;
        }
        void display()
        {
            area=0.5*base*height;
            cout<<"Area of the Triangle: "<<area<<endl;
        }
};

class rectangle:protected shape
{
    protected:
        int length,breadth;
    public:
        void input()
        {
            cout<<"Enter Breadth of the Rectangle: ";
            cin>>breadth;
            cout<<"Enter Length of the Rectangle: ";
            cin>>length;
        }
        void display()
        {
            area=length*breadth;
            cout<<"Area of the Rectangle: "<<area;
        }
};

int main()
{
    circle c;
    c.input();
    c.display();
    triangle t;
    t.input();
    t.display();
    rectangle r;
    r.input();
    r.display();
    return 0;
}