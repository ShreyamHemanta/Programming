#include <iostream>
using namespace std;
class bi
{
    string s;
    public:
    bi ()
    {
        s=" ";
    }
    void Input()
    {
        cout<<"Enter string ";
        cin>>s;
    }
    bi operator + (bi obj)
    {
        bi temp;
        temp.s=s+obj.s;
        return temp;
    }
    void Output()
    {
        cout<<s;
    }
};
int main ()
{
    bi a,b,c;
    a.Input();
    b.Input();
    c=a+b;
    c.Output();
    return 0;
}