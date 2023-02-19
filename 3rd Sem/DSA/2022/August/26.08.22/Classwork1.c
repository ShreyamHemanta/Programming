#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL;

void input()
{
    int data;
    printf("Enter the value : ");
    scanf("%d",&data);
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        struct node *ptr=head;
        while((ptr->next)!=NULL)
        {
            new=new->next;
        }
        ptr->next=new;
    }
}

void output()
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    int x;
    printf("Enter the number of elements you want to enter : ");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        input();
    }
    output();
    return 0;
}