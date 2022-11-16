/*Create a class which stores employee name,id and salary .Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and
basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour.
Calculate the salary of a regular employee and a par-time employee.*/

#include<iostream>
using namespace std;

class employee
{
    protected:
        string name;
        int id,salary;
    public:
        void input()
        {
            cout<<"Enter name of Employee: ";
            cin>>name;
            cout<<"Enter Employee ID: ";
            cin>>id;
        }
};

class regular:protected employee
{
    protected:
        int DA,HRA,Basic;
    public:
         void input()
         {
            cout<<"Enter DA: ";
            cin>>DA;
            cout<<"Enter HRA: ";
            cin>>HRA;
            cout<<"Enter Basic: ";
            cin>>Basic;
         }
         void display()
         {
            salary=Basic+DA+HRA;
            cout<<"Salary: "<<salary<<endl;
         }
};

class parttime:protected employee
{
    protected:
        int hours,pay;
    public:
        void input()
        {
            cout<<"Enter Number of Hours: ";
            cin>>hours;
            cout<<"Enter Pay per Hour: ";
            cin>>pay;
        }
        void display()
        {
            salary=pay*hours;
            cout<<"Salary: "<<salary;
        }
};

int main()
{
    int x;
    cout<<"Enter the type of Employee: "<<endl<<"1.Regular"<<endl<<"2.Part Time"<<endl;
    cin>>x;
    if(x==1)
    {
        regular r;
        r.input();
        r.display();
    }
    else
    {
        parttime p;
        p.input();
        p.display();
    }
    return 0;
}
