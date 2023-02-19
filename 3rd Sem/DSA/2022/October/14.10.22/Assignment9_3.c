//Implementation of Circular Queue using linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *new;
    int data;
    struct node *next;
}*front=NULL;

void create()
{
    struct node *new,*rear;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data :");
    scanf("%d",&new->data);
    new->next=front;
    front=new;
    rear=front;
    char choice;
    printf("Do you want to add another node : (Y/N)\n");
    scanf("  %c",&choice);
    while(choice=='y')
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data :");
        scanf("%d",&new->data);
        new->next=front;
        rear->next=new;
        rear=rear->next;
        printf("Do you want to add another node : (Y/N)\n");
        scanf("  %c",&choice);
    }
    rear=front;
}

void traversal()
{
    struct node *rear=front;
    printf("\n");
    do
    {
        printf("%d",rear->data);
        rear=rear->next;
    } while (rear!=front);
    
}

void cqinsert()
{
    struct node *rear=front,*new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data for the new node :");
    scanf("%d",&new->data);
    do
    {
        rear=rear->next;
    } while (rear->next!=front);
    rear->next=new;
    new->next=front;
}

void cqdel()
{
    struct node *rear=front,*new,*temp;
    do
    {
        rear=rear->next;
    }while (rear->next!=front);
    rear->next=front->next;
    temp=front;
    front=front->next;
    free(temp);
}

int main()
{
    create();
    int ch;
    while (ch!=3)
    {
        printf("\nENTER YOUR CHOICE\n");
        printf("PRESS 1:FOR INSERT\n");
        printf("PRESS 2:FOR DELETION\n");
        printf("PRESS 3:TRAVERSAL\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                cqinsert();
                break;
            case 2:
                cqdel();
                break;
            case 3:
                traversal();
                break;
        }    
    }
    return 0;
}