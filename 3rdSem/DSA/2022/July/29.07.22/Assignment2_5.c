#include <stdio.h>
#include <string.h>

struct date
{
    int day;
    int month;
    int year;
};
struct employee
{
    char name[100];
    struct date dob;
    struct date doj;
    int salary;
}e[1000];

void sort(int n)
{
    int op;
    printf("Select The Option :\n Option 1 : Sort by name \n Option 2 : Sort by DOB\n Option 3 : Sort by Date Of Joining \n Option 4 : Sort by salary\n");
    scanf("%d",&op);
    if(op==1)
    {
        int i, j;
        struct employee temp;
        for (i=0; i<n; i++)
        {
            for (j=0; j<n-i-1; j++)
            {
                if (strcmp(e[j].name,e[j+1].name)>0) //string comparison
                {
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;    
                }        
            }
        }
    }
    if(op==2)
    {
        int i, j;struct employee temp;
        for (i=0; i<n; i++)
        {
            for (j=0; j<n-i-1; j++)
            {
                if (e[j].dob.year>e[j+1].dob.year)
                {
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
                else if(e[j].dob.year==e[j+1].dob.year&&e[j].dob.month>e[j+1].dob.month){
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
                else if(e[j].dob.year==e[j+1].dob.year&&e[j].dob.month==e[j+1].dob.month&&e[j].dob.day>e[j+1].dob.day){
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
            }
        }
    }
    if(op==3)
    {
        int i, j;
        struct employee temp;
        for (i=0; i<n; i++)
        {
            for (j=0; j<n-i-1; j++)
            {
                if (e[j].doj.year>e[j+1].doj.year)
                {
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }else if(e[j].doj.year==e[j+1].doj.year&&e[j].doj.month>e[j+1].doj.month){
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
                else if(e[j].doj.year==e[j+1].doj.year&&e[j].doj.month==e[j+1].doj.month&&e[j].doj.day>e[j+1].doj.day){
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
            }
        }
    }
    if(op==4)
    {
        int i, j;struct employee temp;
        for (i=0; i<n; i++)
        {
            for (j=0; j<n-i-1; j++)
            {
                if (e[j].salary>e[j+1].salary)
                {
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
            }
        }
    }    
        
}
void printsort(int n)
{
    int i;
    printf("\nData After Sorting:\n");
    
    for (i=0; i<n; i++)
    {
        printf("\nName of employee %d : %s\n",i+1,e[i].name);
        printf("\nDate of birth: %d : %d : %d \n",e[i].dob.day,e[i].dob.month,e[i].dob.year);
        printf("\nDate of joining: %d : %d : %d \n",e[i].doj.day,e[i].doj.month,e[i].doj.year);
        printf("\nSalary : %d ",e[i].salary);
    }
}


int main()
{
    int i,n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    printf("Enter employees data :");
    
    for (i=0; i<n; i++)
    {
        printf("\nName of employee:");
        scanf("%s",&e[i].name);
        printf("Date of birth:\n");
        scanf("%d%d%d",&e[i].dob.day,&e[i].dob.month,&e[i].dob.year);
        printf("Date of joining:\n");
        scanf("%d%d%d",&e[i].doj.day,&e[i].doj.month,&e[i].doj.year);
        printf("his/her salary : ");
        scanf("%d",&e[i].salary);
        printf("\n");
    }
    
    void sort(int n);
    void printsort(int);
    sort(n);
    printsort(n);

    return 0;
}