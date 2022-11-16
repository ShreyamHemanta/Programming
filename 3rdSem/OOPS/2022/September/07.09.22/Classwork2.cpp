//base private derived private

#include<iostream>
using namespace std;

class base
{
    private:
        int a;
    public:
        void show()
        {
            cin>>a;
            cout<<a;
        }
};

class derive:private base
{
    public:
        void display()
        {
            show();
        }
};

int main()
{
    derive d;
    d.display();
    return 0;
}