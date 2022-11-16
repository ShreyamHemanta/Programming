/**/

#include<iostream>
using namespace std;

class student
{
    protected:
        string name;
        int roll;
        int age;
};

class test:public student
{
    protected:
        int mark1,mark2,mark3,mark4,mark5;
};

class result:protected test
{
    protected:
        int total;
        float percent;
    public:
    void input()
        {
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Roll No: ";
            cin>>roll;
            cout<<"Enter Age: ";
            cin>>age;
            cout<<"Enter Mark1: ";
            cin>>mark1;
            cout<<"Enter Mark2: ";
            cin>>mark2;
            cout<<"Enter Mark3: ";
            cin>>mark3;
            cout<<"Enter Mark4: ";
            cin>>mark4;
            cout<<"Enter Mark5: ";
            cin>>mark5;
        }
        void output()
        {
            cout<<name<<endl;
            cout<<roll<<endl;
            cout<<age<<endl;
            cout<<mark1<<endl;
            cout<<mark2<<endl;
            cout<<mark3<<endl;
            cout<<mark4<<endl;
            cout<<mark5<<endl;
        }
        void totalmarks()
        {
            total=mark1+mark2+mark3+mark4+mark5;
            cout<<total<<endl;
        }
        void percentage()
        {
            percent=total/5.0;
            cout<<percent<<"%";
        }
};

int main()
{
    result r;
    r.input();
    r.output();
    r.totalmarks();
    r.percentage();
    return 0;
}