#include <iostream>
using namespace std;
class str
{
    string s;
    int l;
    public:
    str(void)
    {
        cout<<"Enter string ";
        cin>>s;
        cout<<"Enter length ";
        cin>>l;

    }
    str(string a,int b)
    {
        s=a;
        l=b;
    }
    str(str &t)
    {
        s=t.s;
        l=t.l;
    }
    void join1(str &r,str &v)
    { 
        
        cout<<"\nThe joind string is "<<(r.s+v.s)<<endl;
    }
    void display()
    {
        cout<<"The string is "<<s<<endl;
    }

};
int main()
{
    str x;
    string a;
    int b;
    cout<<"Enter string ";
        cin>>a;
        cout<<"Enter length ";
        cin>>b;
    str y(a,b);
    str z(x);
    z.join1(x,z);
    x.display();
    y.display();
    z.display();
    return 0;
}
