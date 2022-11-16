#include <iostream>

using namespace std;

class inc
{
    void in(int n)
    {
        ++n;
        cout<<"Number after increment is "<<n;
    }
    private:
        int n;
    public:
    void input()
    {
        cout<<"Enter the Number : ";
        cin>>n;
        in(n);
    }
};

int main()
{
    inc i;
    i.input();
    return 0;
}