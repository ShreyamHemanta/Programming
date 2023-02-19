#include <iostream>

using namespace std; 

class student
{
    private: 
        char name[20];
        int roll_no;
        int total;
    public:
        void input()
        {
            cout<<"Enter Name of the Student : ";
            cin>>name;
            cout<<"Enter Roll No. : ";
            cin>>roll_no;
            cout<<"Enter Total Marks : ";
            cin>>total;
        }
        void output()
        {
            cout<<"\nName of the Student : "<<name<<endl;
            cout<<"Roll No. : "<<roll_no<<endl;
            cout<<"Total Marks : "<<total<<endl;;

        }
};

int main()
{   
    int i,n;
    cout<<"Enter number of Students : ";
    cin>>n;
    student s[i];
    for (i=0;i<n;i++)
    {
        cout<<"Enter the Details of Student "<<i+1<<endl;
        s[i].input();
    }
    for (i=0;i<n;i++)
    {
        cout<<"Details of Student "<<i+1;
        s[i].output();
    }
    return 0;
}