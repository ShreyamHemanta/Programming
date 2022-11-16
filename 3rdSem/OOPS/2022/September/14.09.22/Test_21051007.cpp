#include<iostream>
using namespace std;

class BankAccount
{
    private:
        string customerName;
        int customerID,accountNo;
        double accountBalance;
        string email;
    public:
        BankAccount()
        {
            cout<<"\nEnter the Name of Customer : ";
            cin>>customerName;
            cout<<"Enter the Customer ID : ";
            cin>>customerID;
            cout<<"Enter the Account Number : ";
            cin>>accountNo;
            cout<<"Enter the Account Balance : ";
            cin>>accountBalance;
            cout<<"Enter the Email id of the Customer : ";
            cin>>email;
        }
        BankAccount(string a,int b,int c,double d,string e)
        {
            customerName=a;
            customerID=b;
            accountNo=c;
            accountBalance=d;
            email=e;
        }
        BankAccount(BankAccount &x)
        {
            customerName=x.customerName;
            customerID=x.customerID;
            accountNo=x.accountNo;
            accountBalance=x.accountBalance;
            email=x.email;
        }
        int getBalance()
        {
            return(accountBalance);
        }
        void withdraw()
        {
            int n;
            cout<<"\n\nEnter the amount to be withdrawn : ";
            cin>>n;
            if(n<accountBalance)
            {
                accountBalance=accountBalance-n;
            }
            else
            {
                cout<<"\nInsufficient Account Balance !!\n";
            }
            cout<<"\nNew Account Balance is "<<accountBalance;
        }

};

int main()
{
    cout<<("For Customer 1 :");
    BankAccount m;
    cout<<"\nThe account Balance is "<<m.getBalance();
    m.withdraw();
    cout<<("\n\nFor Customer 2 :\n");
    BankAccount n("xyz",456,7896,1000,"shr@yrue.com");
    cout<<"\nThe account Balance is "<<n.getBalance();
    n.withdraw();
    BankAccount o(n);
    cout<<"\nThe account Balance is "<<o.getBalance();
    o.withdraw();
    return 0;
}

