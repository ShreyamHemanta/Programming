#include <iostream>
using namespace std;
class cmplx
{
    int r,i;
    public:
    void input()
    {
        cout<<"Enter real and imaginary\n";
        cin>>r>>i;
    }
    void output()
    {
        cout<<r<<"+i"<<i<<endl;
    }
    cmplx operator +(cmplx a)
    {
        cmplx temp;
        temp.r=a.r+r;
        temp.i=a.i+i;
        return temp;
    }
    cmplx operator ++(int c)
    {
        cmplx temp;
        temp.r=r+c;
        temp.i=i+c;
        return temp;
    }
    cmplx operator ++()
    {
        i=i+1;
        r=r+1;
    }
};
int main()
{
    cmplx c1,c2,c3,c4,c5;
    c1.input();
    c2.input();
    c1.output();
    c2.output();
    c3=c1+c2;
    c3.output();
    ++c4;
    c5++;
}
