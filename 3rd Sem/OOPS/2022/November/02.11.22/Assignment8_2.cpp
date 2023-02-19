//class regular and partTime inherited from class employee

#include <iostream>
using namespace std;

class employee
{
    protected:
        int id,salary;
        string name;
    public:
        employee(){}
        virtual void input() = 0;
        virtual void totalSalary() = 0;
};

class regular : public employee
{
    protected:
        int DA,HRA,basic;
    public:
        regular(){}
        void input()
        {
            cout<<"Enter the Name of the Employee : ";
            cin>>name;
            cout<<"Enter ID : ";
            cin>>id;
            cout<<"Enter Basic Salary : ";
            cin>>basic;
            DA = 0.5 * basic;
            HRA = 0.8 * basic;
        }
        void totalSalary()
        {
            salary = basic + DA + HRA;
            cout<<"The total salary of the employee is "<<salary;
        }
};

class partTime : public employee
{
    protected:
        int pay,hour;
    public:
        void input()
        {
            cout<<"Enter the Name of the Employee : ";
            cin>>name;
            cout<<"Enter ID : ";
            cin>>id;
            cout<<"Enter pay per hour : ";
            cin>>pay;
            cout<<"Enter number of hours : ";
            cin>>hour;
        }
        void totalSalary()
        {
            salary=pay*hour;
            cout<<"The total salary of the employee is "<<salary;
        }
}; 

int main()
{
    employee *e;
    regular r;
    partTime p;
    int ch;
    cout<<"Enter the type of employee (1.Regular 2.Part Time): ";
    cin>>ch;
    if(ch==1)
    {
        e = &r;
        e -> input();
        e -> totalSalary(); 
    }
    else
    {
        e = &p;
        e -> input();
        e -> totalSalary();
    }
    return 0;
}