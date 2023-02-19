#include <iostream>

using namespace std;

class display
{
    private:
        char a,b;
        int n;
    public:
        void input()
        {
            cout<<"Do you want to give a charcter input (y OR n): ";
            cin>>b;
            if(b=='y')
            {
                cout<<"Enter the character to print : ";
                cin>>a;
            }
            else
            {
                a='*';
            }
            cout<<"Do you want to give a charcter input (y OR n): ";
            cin>>b;
            if(b=='y')
            {
                cout<<"Enter the number of times character should print : ";
                cin>>n;
            }
            else
            {
                n=80;
            }
        }
        void output()
        {
            for(int i=0;i<n;i++)
            {
                cout<<a<<" ";
            }
        }
};

int main()
{
    display d;
    d.input();
    d.output();
    return 0;
}