//class savings and current inherited from class account

#include <iostream>
using namespace std;
class Account
{
    protected:
        string name;
        int accno,bal=0;
    public:
        Account(){}
        virtual void deposit() = 0;
        virtual void withdraw() = 0;
        virtual void displaybal() = 0;
};
class Savings : public Account
{
    int minbal=2000;
    public:
    Savings(){}
    void deposit()
    {
        int a;
        cout<<"Enter amount : ";
        cin>>a;
        bal+=a;
    }
     void withdraw()
    {
        int a;
        cout<<"\nEnter amount to withdraw : ";
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
    Current(){}
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
        cout<<"\nEnter amount to wiothdraw : ";
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
    Account *a;
    Savings s;
    Current c;
    int ch;
    cout<<"Enter the type of accpunt (1.Savings 2.Current): ";
    cin>>ch;
    if(ch==1)
    {
        a = &s;
        a -> deposit();
        a -> withdraw(); 
        a -> displaybal();
    }
    else
    {
        a = &c;
        a -> deposit();
        a -> withdraw(); 
        a -> displaybal();
    }
    return 0;
}