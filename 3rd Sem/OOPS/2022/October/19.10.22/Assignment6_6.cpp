/*WAP to add two objects of distance class. Overload the operator ‘>’ to compare two
objects and return the object with larger time value and display it. Overload the ‘==’
operator to compare and display whether two given objects contain same distance
value*/

#include <iostream>
using namespace std;
class dist
{
    int d;
    public:
    void input()
    {
        cout<<"Enter distance\n";
        cin>>d;
    }
    void output()
    {
        cout<<d<<endl;
    }
    dist operator + (dist obj)
    {
        dist temp;
        temp.d=d+obj.d;
        return temp;
    }
    dist operator > (dist obj1)
    {
        if (d>obj1.d)
        {
            return *this;
        }
        else
        {
            return obj1;
        }
    }
    dist operator == (dist obj)
    {
        if (d==obj.d)
        {
            cout<<"They have same distance.";
        }
        return obj;
    }
};
int main ()
{
    dist a,b,c,d,e;
    a.input();
    b.input();
    c=a+b;
    c.output();
    d=a>b;
    cout<<"\nLarger is: ";
    d.output();
    e=a==b;
    return 0;
}