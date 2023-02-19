#include <iostream>

using namespace std;

class simpleinterest
{
    private:
        float prin;
        int roi;
        int time;
        float si;
    public:
        void input()
        {
            cout<<"Enter the principle Amount : ";
            cin>>prin;
            cout<<"Enter the rate of interest : ";
            cin>>roi;
            cout<<"Enter the time : ";
            cin>>time;
        }
        void output()
        {
            si=prin*(1+((float)roi/100)*time);
            cout<<"The amount of Simple Interest is : "<<si;
        }
};

int main()
{
    simpleinterest s;
    s.input();
    s.output();
}