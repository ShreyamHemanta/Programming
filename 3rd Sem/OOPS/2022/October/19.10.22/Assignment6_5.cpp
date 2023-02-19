/*WAP to add two objects of time class. Overload the operator ‘==’ to compare two objects
and display whether they are equal or not. Overload the assignment operator*/

#include<iostream>
using namespace std;

class Time
{
    int hr,min;
    public: 
        void input()
        {
            cout<<"Enter time in hours : ";
            cin>>hr;
            cout<<"enter time in minutes : ";
            cin>>min;
        }
        friend void operator ==(Time t1,Time t2);
        Time operator =(int a)
        {
            Time temp;
            temp.hr=hr;
            temp.min=min;
            return temp;
        }
        void show()
        {
            cout<<hr<<":"<<min<<endl;
        }
};

void operator ==(Time t1,Time t2)
{
    if(t1.hr==t2.hr && t1.min==t2.min)
    {
        cout<<"Equal time"<<endl;
    }
    else
    {
        cout<<"Time not equal"<<endl;
    }
}

int main()
{
    Time t1,t2,t3;
    t1.input();
    t2.input();
    t1==t2;
    t3=t2;
    t1.show();
    t2.show();
    t3.show();
    return 0;
}