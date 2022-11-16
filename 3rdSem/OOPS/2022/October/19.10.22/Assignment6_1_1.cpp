#include <iostream>
using namespace std;

class dist
{
    int feet,inches;
    public:
    void input()
    {
        cout<<"Enter inches and feet\n";
        cin>>inches>>feet;  
    }
    void output()
    {
        cout<<"Distance is "<<inches<<" "<<feet<<endl;
    }
    dist operator +(dist m)
    {
        dist temp;
        temp.inches=m.inches+inches;
        temp.feet=m.feet+feet;
        return temp;
    } 
    dist operator +(int a)
    {
        dist temp;
        temp.inches=a+inches;
        temp.feet=a+feet;
        return temp;
    }
    dist operator --()
    {
        dist temp;
        temp.inches=inches-1;
        temp.feet=feet-1;
        return temp;
    }
};
int main()
{
    dist d1,d2,d3,d4,d5;
    d1.input();
    d2.input();
    d3=d1+d2;
    d4=d2+4;
    d5=--d1;
    d3.output();
    d4.output();
    d5.output();
    return 0;
}