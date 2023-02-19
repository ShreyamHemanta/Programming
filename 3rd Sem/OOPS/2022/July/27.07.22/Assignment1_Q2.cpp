#include <iostream>

using namespace std;
 
struct student
{
    char name[50];
    int roll_no;
    int maths;
    int phy;
    int chem;
    int bee;
    int aec;
    int total;
}s[1000];

void totalandpercent(int n)
{
    int i,sum;
    float percent;
    for (i=0;i<n;i++)
    {
        sum=0;
        sum=sum+s[i].maths+s[i].phy+s[i].chem+s[i].bee+s[i].aec;
        percent=((float)sum)/5;
        cout<<"\nAcademic details of Student "<<i+1<<endl;
        cout<<"Total Marks : "<<sum<<endl;
        cout<<"Percentage of Marks : "<<percent<<endl;
    }
}

void studentdetails(int n,int roll)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(s[i].roll_no==roll)
        {
            cout<<"\nName of the Student : "<<s[i].name<<endl;
            cout<<"Roll No. : "<<s[i].roll_no<<endl;
            cout<<"Marks in Mathematics : "<<s[i].maths<<endl;
            cout<<"Marks in Physics : "<<s[i].phy<<endl;
            cout<<"Marks in Chemistry : "<<s[i].chem<<endl;
            cout<<"Marks in BEE : "<<s[i].bee<<endl;
            cout<<"Marks in AEC : "<<s[i].aec<<endl;
            break;
        }
    }
}

void rangeofpercent(int n,float low,float high)
{
    int i,sum;
    float percent;
    for(i=0;i<n;i++)
    {
        sum=0;
        sum=sum+s[i].maths+s[i].phy+s[i].chem+s[i].bee+s[i].aec;
        percent=((float)sum)/5;
        if ((percent>=low)&&(percent<=high))
        {
            cout<<"\nName of the Student : "<<s[i].name<<endl;
            cout<<"Roll No. : "<<s[i].roll_no<<endl;
            cout<<"Marks in Mathematics : "<<s[i].maths<<endl;
            cout<<"Marks in Physics : "<<s[i].phy<<endl;
            cout<<"Marks in Chemistry : "<<s[i].chem<<endl;
            cout<<"Marks in BEE : "<<s[i].bee<<endl;
            cout<<"Marks in AEC : "<<s[i].aec<<endl;
        }
    }
}

void sort(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(s[j].total>s[j+1].total)
            {
                swap(s[j],s[j+1]);
            }
        }
    }
}

void printsort(int n)
{
    int i;
    cout<<"\nData After Sorting : "<<endl;
    for (i=0;i<n;i++)
    {
        cout<<"\nName of the Student : "<<s[i].name<<endl;
        cout<<"Roll No. : "<<s[i].roll_no<<endl;
        cout<<"Marks in Mathematics : "<<s[i].maths<<endl;
        cout<<"Marks in Physics : "<<s[i].phy<<endl;
        cout<<"Marks in Chemistry : "<<s[i].chem<<endl;
        cout<<"Marks in BEE : "<<s[i].bee<<endl;
        cout<<"Marks in AEC : "<<s[i].aec<<endl;
    }
}

int main()
{
    int n,i;
    void totalandpercent(int);
    cout<<"\nEnter the Number of Students : ";
    cin>>n;
    for (i=0;i<=n;i++)
    {
        cout<<"Enter Name of the Student : ";
        cin>>s[i].name;
        cout<<"Enter Roll No. of the Student : ";
        cin>>s[i].roll_no;
        cout<<"Enter Marks in Mathematics : ";
        cin>>s[i].maths;    
        cout<<"Enter Marks in Physics : ";
        cin>>s[i].phy;    
        cout<<"Enter Marks in Chemistry : ";
        cin>>s[i].chem;    
        cout<<"Enter Marks in BEE : ";
        cin>>s[i].bee;
        cout<<"Enter Marks in AEC : ";
        cin>>s[i].aec;
    }
    totalandpercent(n);
    int roll;
    cout<<"\nEnter the Roll No. of the Student to get Details :";
    cin>>roll;
    void studentdetails(int,int);
    studentdetails(n,roll);
    float start,end;
    void rangeofpercent(int,float,float);
    cout<<"\nEnter the Range of Percentage :";
    cin>>start>>end;
    rangeofpercent(n,start,end);
    void sort(int);
    void printsort(int);
    sort(n);
    printsort(n);
    return 0;
}