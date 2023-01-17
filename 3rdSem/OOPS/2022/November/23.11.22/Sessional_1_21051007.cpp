#include<iostream>
using namespace std;

class rupee
{
    protected:
        int r;
    public:
        void input()
        {
            cin>>r;
        }
        int getr()
        {
            return r;
        }
        void show()
        {
            cout<<"Rupees : "<<r<<endl;
        }
};

class paisa
{
    protected:
        int p;
    public:
        void input()
        {
            cin>>p;
        }
        void show()
        {
            cout<<"Paise : "<<p<<endl;
        }
        void convert(int obj1)
        {
            int t;
            t=(obj1*100)+p;
            cout<<"Total Money in paise : "<<t;
        }
};

int main()
{
    rupee ru;
    paisa pa;
    ru.input();
    ru.show();
    pa.input();
    pa.show();
    pa.convert(ru.getr());
    return 0;
}