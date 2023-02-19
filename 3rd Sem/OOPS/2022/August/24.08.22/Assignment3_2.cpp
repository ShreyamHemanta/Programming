#include<iostream>

using namespace std;

class volume
{
    private:
        float rad1,len,bre,hei1,rad2,hei2;
        float vol;
    public:
        float vo(float,float);
        float vo(float,float,float,float);
        float vo(float,float,float);
        void input()
        {
            cout<<"Enter the radius of the sphere : ";
            cin>>rad1;
            cout<<"Enter the length of the cuboid : ";
            cin>>len;
            cout<<"Enter the breadth of the cuboid : ";
            cin>>bre;
            cout<<"Enter the height of the cuboid : ";
            cin>>hei1;
            cout<<"Enter the height of the cylinder : ";
            cin>>hei2;
            cout<<"Enter the radius of the cylinder : ";
            cin>>rad2;
        }
        void output()
        {
            cout<<"The volume of the sphere is "<<vo(rad1,vol);
            cout<<"\nThe volume of the cuboid is "<<vo(len,bre,hei1,vol);
            cout<<"\nThe volume of the cylinder is "<<vo(rad2,hei2,vol);
        }
};

float volume::vo(float rad1,float vol)
{
    vol=(4/3)*3.14*rad1*rad1*rad1;
    return(vol);
}

float volume::vo(float len,float bre,float hei1,float vol)
{
    vol=len*bre*hei1;
    return(vol);
}

float volume::vo(float rad2,float hei2,float vol)
{
    vol=0.5*3.14*rad2*rad2*hei2;
    return (vol);
}


int main()
{
    volume v;
    v.input();
    v.output();
    return 0;
}