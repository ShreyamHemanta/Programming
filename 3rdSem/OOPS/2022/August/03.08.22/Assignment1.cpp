#include <iostream>

using namespace std; 

class hello
{
    private:
        char name[20];
    public:
        void show()
        {
            cout<<"Enter the Name of the Student : ";
            cin>>name;
            cout<<endl<<"Hello "<<name;
        }
};

int main()
{
    hello n;
    n.show();
    return 0;
}