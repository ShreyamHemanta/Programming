#include <iostream>

using namespace std;

class swa
{
    void sw(int *x,int *y)
    {
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }
    private:
        int a,b,temp;
    public:
        void input()
        {
            cout<<"Enter 2 numbers :\n";
            cin>>a>>b;
            sw(&a,&b);
        }
        void output()
        {
            cout<<"Numbers after Swapping :\n";
            cout<<a<<"\n"<<b;
        }
};

int main()
{
    swa s;
    s.input();
    s.output();
    return 0;
}