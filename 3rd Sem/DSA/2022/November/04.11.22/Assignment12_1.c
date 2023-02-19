//Binary Search Tree

#include<stdio.h>

void buildtree(int t[],int index,int item)
{
    t[index]=item;
    int data,ele;
    char ch;
    printf("Do you want to enter another element(y/n): ");
    scanf (" %c",&ch);
    if(ch=='y' || ch=='Y')
    {
        printf("Enter Element : ");
        scanf("%d",&ele);
        if(ele>item)
        {
            buildtree(t,(2*index)+1,ele);
        }
        else
        {
            buildtree(t,(2*index)+2,ele);
        }
    }
}
int main()
{
    int t[20], data;
    printf("Enter root node data ");
    scanf ("%d",&data);
    for(int i=0;i<20;i++)
    {
      t[i]=-1;
    } 
    buildtree(t,0,data);
    for(int i=0;i<20;i++)
    {
        if(t[i]==-1)
        {
            printf("-\t");
        }
        else
        {
            printf("%d\t",t[i]);
        }
    }
    return 0;
}
