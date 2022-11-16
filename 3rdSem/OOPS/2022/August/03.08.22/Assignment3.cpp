#include <iostream>

using namespace std; 

class employee
{
    private: 
        int id;
        char name[20];
        int age;
        int salary;
        float gross;
    public:
        void input()
        {
            cout<<"Enter ID of the Employee : ";
            cin>>id;
            cout<<"Enter Name : ";
            cin>>name;
            cout<<"Enter Age : ";
            cin>>age;
            cout<<"Enter Basic Salary : ";
            cin>>salary;
        }
        void output()
        {
            cout<<"\nID of the Employee : "<<id<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Basic Salary : "<<salary<<endl;
            gross=0.9*salary;
            cout<<"Gross Salary : "<<gross<<endl;
        }
};

int main()
{   
    int i,n;
    cout<<"Enter Number of Employees : ";
    cin>>n;
    employee e[i];
    for (i=0;i<n;i++)
    {
        cout<<"\nEnter the Details of Employee "<<i+1<<endl;
        e[i].input();
    }
    for (i=0;i<n;i++)
    {
        cout<<"\nDetails of Employee "<<i+1<<endl;
        e[i].output();
    }
    return 0;
}