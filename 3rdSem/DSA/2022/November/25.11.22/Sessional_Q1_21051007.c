//Set 4

#include<stdio.h>
#define MAXSIZE 100

int create1(int**,int,int,int);
int create2(int**,int,int,int);
void display(int*,int,int,int,int,int,int);

int main()
{
    int front1,front2,rear1,rear2,n1,n2;
    int a[MAXSIZE];
    printf("Enter number of elements in queue 1 and queue 2 : \n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    create1(a[MAXSIZE],front1,rear1,n1);
    create2(a[MAXSIZE],front2,rear2,n2);
    display(a[MAXSIZE],front1,front2,rear1,rear2,n1,n2);
    return 0;
}

int create1(int *a[MAXSIZE],int front1,int rear1,int n1)
{
    for(rear1=0;rear1<n1;rear1++)
    {
        int x;
        printf("Enter element : ");
        scanf("%d",&x);
        *a[rear1]=&x;
    }
    return *a[MAXSIZE];
}

int create2(int *a[MAXSIZE],int front2,int rear2,int n2)
{
    for(front2=MAXSIZE;front2>(MAXSIZE-n2);front2--)
    {
        int x;
        printf("Enter element : ");
        scanf("%d",&x);
        *a[front2]=&x;
    }
    return *a[MAXSIZE];
}

void display(int a[MAXSIZE],int front1,int front2,int rear1,int rear2,int n1,int n2)
{
    printf("Queue 1/n");
    for(rear1=0;rear1<n1;rear1++)
    {
        printf("%d",a[rear1]);
    }
    printf("/n");
    printf("Queue 2\n");
    for(front2=MAXSIZE;front2>(MAXSIZE-n2);front2--)
    {
        printf("%d",a[front2]);
    }
}