/*Create a class student which stores name, roll number and age of a student. Derive a class
test from student class, which stores marks in 5 subjects. Input and display the details of
a student.*/

#include<iostream>
using namespace std;

class student
{
    protected:
        string name;
        int roll;
        int age;
};

class test:protected student
{
    protected:
        int mark1,mark2,mark3,mark4,mark5;
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
};

int main()
{
    test t;
    t.input();
    t.output();
    return 0;
}