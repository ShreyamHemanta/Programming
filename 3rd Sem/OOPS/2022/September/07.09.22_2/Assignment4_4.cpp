#include <iostream>
using namespace std;

class order
{
    private:
        int n;
    public:
        order()
        {
            cout<<"Enter a number : ";
            cin>>n;
        }
        order(int a)
        {
            n=a;
        }
        order(order &x)
        {
            n=x.n;
        }
        void display()
        {
            cout<<n<<endl;
        }
        ~order()
        {
            cout<<"\nDestructor caller";
        }
};

int main()
{
    order o1;
    cout<<"1st default constructor\n";
    o1.display();
    order o2(7);
    cout<<"2nd parametenized constructor\n";
    o2.display();
    cout<<"3rd copy constructor\n";
    order o3(o2);
    o3.display();
}