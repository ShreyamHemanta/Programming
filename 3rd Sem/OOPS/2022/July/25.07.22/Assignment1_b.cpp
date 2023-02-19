//Entering Name and RollNo. and displaying it using Structure

#include <iostream>
using namespace std;

struct stu_data
{
    char name[50];
    int roll_no;
};

int main()
{
    stu_data s1;
    cout<<"Enter Your Name : "<<endl;
    cin.get(s1.name,50);
    cout<<"Enter Your RollNo. : "<<endl;
    cin>>s1.roll_no;
    cout<<"My Name is "<<s1.name<<endl;
    cout<<"My RollNo. is "<<s1.roll_no;
    return 0;
}