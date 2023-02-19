//Entering Name and RollNo. and displaying it 

#include <iostream>
using namespace std;

int main()
{
    char a[50];
    int b;
    cout<<"Enter Your Name : "<<endl;
    cin.get(a,50);
    cout<<"Enter Your RollNo. : "<<endl;
    cin>>b;
    cout<<"My Name is "<<a<<endl;
    cout<<"My RollNo. is "<<b;
    return 0;
}