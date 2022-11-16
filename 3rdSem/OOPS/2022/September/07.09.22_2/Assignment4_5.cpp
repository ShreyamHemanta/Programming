#include <iostream>
using namespace std;
class mo
{
    public:
    static int c;
    mo(void)
    {
        c++;
    }
   
    static void count()
    {
       cout<<"The number of objects is "<<c<<endl;

    } 


};
int mo::c;
int main()
{
    mo ab,cb,cc;
    ab.count();
}