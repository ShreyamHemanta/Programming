/*Create a class which stores account number, customer name and balance. Derive two
classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores
minimum balance. The ‘Current’ class stores the over-due amount. Include member
functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.]
[For current account overdue amount should be calculated.]
-display balance*/


#include <iostream>
using namespace std;
class Account
{
    public:
    string name;
    int accno,bal;
};
class Savings : public Account
{
    int minbal=2000;
    public:
    void deposit()
    {
        int a;
        cout<<"Enter amount";
        cin>>a;
        bal+=a;
    }
     void withdraw()
    {
        int a;
        cout<<"\nEnter amount";
        cin>>a;
        if(bal>minbal)
        bal-=a;
        else
        cout<<"Not possible\n";

    }
    void displaybal()
    {
        cout<<"Balance: "<<bal;
    
    }


};
class Current : public Account
{
    int overdue=2000;
    public:
    void deposit()
    {
        int a;
        cout<<"\nEnter amount: ";
        cin>>a;
        bal+=a;
    }
     void withdraw()
    {
        int a;
        cout<<"\nEnter amount: ";
        cin>>a;
        if(bal>overdue)
        bal-=a;
        else if(bal-a>overdue)
        {
        bal-=a;
        cout<<"Overdue is "<<bal;
        }
        else
         cout<<"Not possible\n";

    }
    void displaybal()
    {
        cout<<"Balance: "<<bal;
    
    }
};

int main()
{
    Savings s;
    Current c;
    s.deposit();
    s.withdraw();
    s.displaybal();
    c.deposit();
    c.withdraw();
    c.displaybal();
    return 0;
}