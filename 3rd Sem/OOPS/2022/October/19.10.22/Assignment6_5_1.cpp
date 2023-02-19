#include <iostream>
using namespace std;
class time
{
    
    public:
    int hr,min;
    void input()
    {
        cout<<"Enter time in hour and minute\n";
        cin>>hr>>min;
    }
    void output()
    {
        cout<<hr<<" hours "<<min<<" minutes ";
    }
    int operator ==(time t)
    {
        if(t.hr==hr&&t.min==min)
        {
            return 1;
        }
        else
        return 0;
    }
    time operator =(time t)
    {
        time temp;
        temp.hr=t.hr;
        temp.min=t.min;
        return temp;
        }

};
int main()
{
    time a,b,c;
    a.input();
    b.input();
    if(a==b)
     cout<<"Equal\n";
    else 
     cout<<"Unequal\n";
    c=b;
    c.output();
    return 0;
}