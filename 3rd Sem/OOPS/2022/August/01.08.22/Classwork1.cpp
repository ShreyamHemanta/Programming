#include <iostream>

using namespace std; 

class number
{
    int a;
    public:
    void input()
    {
            cout<<"Enter number of Objects : ";
            cin>>a;
    }
    void output()
    {
        cout<<"The number of objects is : "<<a;
    }
};

int main()
{
    number n;
    n.input();
    n.output();
    return 0;
}