//Linear Linked List

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
            ptr=ptr->next;
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

struct node* insert_first(struct node *head)
{
    struct node *new1;
    new1=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for new node : ");
    scanf("%d",&new1->data);
    new1->next=head;
    head=new1;
    return head;
}

void insert_last(struct node*head)
{
    struct node *ptr1=head;
    struct node *new1;
    new1=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for new node : ");
    scanf("%d",&new1->data);
    while(ptr1->next!=NULL)
    {
        ptr1=ptr1->next;
    }
    ptr1->next=new1;
    new1->next=NULL;
}

void insert_pos(struct node*head)
{
    int pos,count=1;
    struct node *ptr1=head;
    struct node *new1;
    new1=(struct node*)malloc(sizeof(struct node));
    printf("Enter the position for new node : ");
    scanf("%d",&pos);
    printf("Enter the data for new node : ");
    scanf("%d",&new1->data);
    while(ptr1!=NULL&&count!=pos-1)
    {
        ptr1=ptr1->next;
        count++;
    }
    new1->next=ptr1->next;
    ptr1->next=new1;
}

struct node* delete_first(struct node*head)
{
    struct node *ptr1;
    if(head==NULL)
    {
        printf("Invalid");
    }
    head=head->next;
    free(ptr1);
    return head;
}

void delete_last(struct node *head)
{
    struct node *ptr1=head,*temp;
    while((ptr1->next)->next!=NULL)
    {
        ptr1=ptr1->next;
    }
    temp=ptr1->next;
    ptr1->next=(ptr1->next)->next;
    free(temp);
}

void delete_pos(struct node *head)
{
    struct node *ptr1=head,*temp;
    int pos,count=1;
    printf("Enter the position for node to be deleted : ");
    scanf("%d",&pos);
    while(ptr1!=NULL&&count!=pos-1)
    {
        ptr1=ptr1->next;
        count++;
    }
    temp=ptr1->next;
    ptr1->next=(ptr1->next)->next;
    free(temp);
}

int main()
{
    int x;
    printf("Enter the number of nodes you want to enter : ");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        input();
    }
    output();
    int n;
    printf("\nSelect the option :\n1.Inserting at first :\n2.Inserting at last:\n3.Inserting at a postion:\n4.Delecting at first:\n5.Deleting at last:\n6.Deleting at a position:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            head=insert_first(head);
            printf("\nLinked list after adding at first : ");
            output();
            break;
        }
        case 2:
        {
            insert_last(head);
            printf("\nLinked list after adding at last : ");
            output();
            break;
        }
        case 3:
        {
            insert_pos(head);
            printf("\nLinked list after adding at postition : ");
            output();
            break;
        }
        case 4:
        {
            head=delete_first(head);
            printf("\nLinked list after deletion from first : ");
            output();
            break;
        }
        case 5:
        {
            delete_last(head);
            printf("\nLinked list after deletion from last : ");
            output();
            break;
        }
        case 6:
        {
            delete_pos(head);
            printf("\nLinked list after deletion from position : ");
            output();
            break;
        }
        default:
        {
            printf("\nInvalid Entry");
        }
    }
    return 0;
}


