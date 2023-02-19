#include <iostream>
using namespace std;

class time1
{
    private: 
        int hour,min;
    public:
        time1()
        {
            cout<<"Enter Hour part : ";
            cin>>hour;
            cout<<"Enter Minutes part : ";
            cin>>min;
        }
        time1(int a,int b=00)
        {
            hour=a;
            min=b;
        }
        time1(time1 &x)
        {
            hour=x.hour;
            min=x.min;
        }
        void display()
        {
            cout<<endl<<hour<<":"<<min;
        }
        ~time1()
        {
            cout<<"\nDestructor caller";
        }
};

int main()
{
    time1 t1;
    t1.display();
    time1 t2(15,45);
    time1 t4(15);
    t4.display();
    t2.display();
    time1 t3(t2);
    t3.display();
    return 0;
}