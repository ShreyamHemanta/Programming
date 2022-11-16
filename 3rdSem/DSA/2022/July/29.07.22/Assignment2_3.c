#include <stdio.h>

struct student 
{
char name[100];
int roll_no;
int mark1,mark2,mark3,mark4,mark5;
int total;
char grade[100];
}s[1000];

void sort(int n)
{
    int i, j;
    struct student temp;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (s[j].total > s[j+1].total)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;    
            }        
        }
    }    
}
void printsort(int n)
{
    int i;
    printf("\nData after sorting:\n");
    
    for (i=0; i<n; i++)
    {
        printf("\nName of the student: %s\n",s[i].name);
        printf("Roll No. : %d\n",s[i].roll_no);
        printf("Marks of student: %d  %d  %d  %d  %d",s[i].mark1,s[i].mark2,s[i].mark3,s[i].mark4,s[i].mark5);
        printf("\nTotal marks of student %d",s[i].total);
        printf("\nGrade of student %s",s[i].grade);
    }
}



int main()
{
    int i,n;
    printf("Enter the number of students: ");
    scanf("%d",&n);

    printf("Enter student data:\n");
    for (i=0; i<n; i++)
    {
        printf("For student %d :\n",i+1);
        printf("\nEnter the name of the student: ");
        scanf("%s",&s[i].name);
        printf("Enter the roll number of the student: ");
        scanf("%d",&s[i].roll_no);
        printf("Enter marks in 5 subjects: ");
        scanf("%d %d %d %d %d",&s[i].mark1,&s[i].mark2,&s[i].mark3,&s[i].mark4,&s[i].mark5);
        s[i].total = s[i].mark1 + s[i].mark2 + s[i].mark3 +s[i].mark4 + s[i].mark5;
        printf("Enter the grade ");
        scanf("%s",&s[i].grade);
        printf("\n");
        
        
    }
    void sort(int);
    void printsort(int);
    sort(n);
    printsort(n);

    return 0;
}