//base public derived private

#include<iostream>
using namespace std;

class base
{
    public:
        int a;
};

class derive:private base
{
    private:
        int b;
    public:
        void show()
        {
            cin>>a;
            cin>>b;
            cout<<a<<endl;
            cout<<b;
        }
};

int main()
{
    derive d;
    d.show();
    return 0;
}