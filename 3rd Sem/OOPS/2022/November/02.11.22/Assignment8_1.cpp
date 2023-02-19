//class circle, triangle and rectangle inherited from class shape

#include <iostream>
using namespace std;

class shape
{
    protected:
        float area;
    public:
        shape(){}
        virtual void input() = 0;
        virtual void show() = 0;
};

class circle : public shape
{
    protected:
        int radius;
    public:
        circle(){}
        void input()
        {
            cout<<"Enter radius of the circle : ";
            cin>>radius;
        }
        void show()
        {
            area = 3.14 * radius * radius;
            cout<<"Area of Circle : "<<area<<endl;
        }
};

class square : public shape
{
    protected:
        int side;
    public:
        square(){}
        void input()
        {
            cout<<"Enter radius of the square : ";
            cin>>side;
        }
        void show()
        {
            area = side * side;
            cout<<"Area of Square : "<<area<<endl;
        }

};

class triangle : public shape
{
    protected:
        int base,height;
    public:
        triangle(){}
        void input()
        {
            cout<<"Enter base of the triangle : ";
            cin>>base;
            cout<<"Enter height of the triangle : ";
            cin>>height;
        }
        void show()
        {
            area =0.5 * base * height;
            cout<<"Area of Triangle : "<<area<<endl;
        }
};

int main()
{
    shape *s;
    circle c;
    square sq;
    triangle t;
    s = &c;
    s -> input();
    s -> show();
    s = &sq;
    s -> input();
    s -> show();
    s = &t;
    s -> input();
    s -> show();
    return 0;
}