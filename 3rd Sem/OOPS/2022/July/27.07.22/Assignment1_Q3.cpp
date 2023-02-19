#include <iostream>
#include <iomanip>
using namespace std;


struct employees
{
    int id;
    char name[20];
    int age;
    int salary;
    float gross;
};
int main()
{
    int n;
    cout<<"Enter the number of Employees"<<endl;
    cin>>n;
    struct employees e[n],*p;
    p = &e[0];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter details of Employee "<<i+1<<endl;
        cout<<"ID : ";
        cin>>(p+i)->id;
        cout<<"NAME : ";
        cin>>(p+i)->name;
        cout<<"AGE : ";
        cin>>(p+i)->age;
        cout<<"SALARY : ";
        cin>>(p+i)->salary;
       
    }
    
    for(i=0;i<n;i++)
    {
        (p+i)->gross= (p+i)->salary+0.9*((p+i)->salary);
    }
    
    cout<<"Details of Employees are:\n";
    cout<<"\nID\tNAME\tAGE\tBASIC SALARY\tGROSS SALARY"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<(p+i)->id<<setw(10)<<(p+i)->name<<setw(10)<<(p+i)->age<<setw(10)<<(p+i)->salary<<setw(10)<<(p+i)->gross<<endl;
    }
    return 0;
}