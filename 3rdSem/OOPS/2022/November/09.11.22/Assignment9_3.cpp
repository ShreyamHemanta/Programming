////Sorting of an array using class template

#include<iostream>
using namespace std;

template <class T>

class A
{
    T x[5];
    public:
        void input()
        {
            for(int i=0;i<5;i++)
            {
                cin>>x[i];
            }
        }
        void sort()
        {
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    if(x[i]<x[j])
                    {
                        T temp;
                        temp=x[i];
                        x[i]=x[j];
                        x[j]=temp;
                    }
                }
            }
        }
        void show()
        {
            for(int i=0;i<5;i++)
            {
                cout<<x[i]<<" ";
            }
            cout<<endl;
        }
};

int main()
{
    A <int> a;
    a.input();
    a.sort();
    a.show();
    A <float> b;
    b.input();
    b.sort();
    b.show();
    return 0;
}