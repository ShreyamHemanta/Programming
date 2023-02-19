#include <iostream>

using namespace std;

class rectangle
{
    private:
        int area,length,breadth;
    public:
        void show()
        {
            cout<<"Enter the Length : ";
            cin>>length;
            cout<<"Enter the Breadth : ";
            cin>>breadth;
            area=length*breadth;
            cout<<"The Area of the Rectagle is "<<area<<" sq.units";
        }
};

int main()
{
    rectangle r;
    r.show();
    return 0;
}