#include <iostream>

using namespace std;

struct student
{
    char name[20];
    int roll_no;
    int maths;
    int phy;
    int chem;
    int bee;
    int aec;
};

int main()
{
    student s1;
    cout<<"Enter Name of the Student : ";
    cin>>s1.name;
    cout<<"Enter Roll No. of the Student : ";
    cin>>s1.roll_no;
    cout<<"Enter Marks in Mathematics : ";
    cin>>s1.maths;    
    cout<<"Enter Marks in Physics : ";
    cin>>s1.phy;    
    cout<<"Enter Marks in Chemistry : ";
    cin>>s1.chem;    
    cout<<"Enter Marks in BEE : ";
    cin>>s1.bee;
    cout<<"Enter Marks in AEC : ";
    cin>>s1.aec;
    cout<<"\nDISPLAYING DATA OF THE STUDENT :-\n"<<endl;
    cout<<"NAME : "<<s1.name<<endl;
    cout<<"Roll No. : "<<s1.roll_no<<endl;
    cout<<"MATHEMATICS MARKS : "<<s1.maths<<endl;
    cout<<"PHYSICS MARKS : "<<s1.phy<<endl;
    cout<<"CHEMISTRY MARKS :"<<s1.chem<<endl;
    cout<<"BEE MARKS : "<<s1.bee<<endl;
    cout<<"AEC MARKS : "<<s1.aec;
    return 0;
}