#include <iostream>

using namespace std;

class operate
{
    private:
        int n;
    public:
        void input()
        {
            cout<<"Enter the Number : ";
            cin>>n;
        }
        void sqr(operate x);
        void cube(operate y);
};

inline void operate::sqr(operate x)
{
    cout<<"Square of "<<n<<" is "<<n*n;
}

inline void operate::cube(operate y)
{
    cout<<"\nCube of "<<n<<" is "<<n*n*n;
}

int main()
{
    operate o;
    o.input();
    o.sqr(o);
    o.cube(o);
    return 0;
}