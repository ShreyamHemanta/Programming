//Double Circular Linked List Modification

#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* prev;
    int data;
    struct node* next;
}*head=NULL;

struct node* createnode(struct node* head )
{
    struct node* tail;
    struct node* ptr;
    char choice;
    do
    {
        struct node* new = (struct node*) malloc(sizeof(struct node));
        printf("\nEnter the Data : ");
        scanf("%d",&new->data);
        if(head == NULL)
            head = ptr = new ;
        else
        {
            ptr->next = new ;
            new->prev = ptr ;
            ptr = new ;
        }
        new->next = head ;
        printf("Do you Wish to Continue (y/n) : ");
        scanf(" %c", &choice);
    }while(choice == 'y');
    head->prev = ptr ;
    return head ;
}

struct node* createnew(struct node* head)
{
    struct node* new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&new->data);
    (new->prev)=(head->prev);
    new->next=head;
    (head->prev)->next=new;
    (head->prev)=(head->prev)->next;
    return head;
}

void showlist(struct node* head)
{
    struct node* ptr = head ;
    do
    {
        printf("%d ",ptr->data);
        ptr = ptr->next ;
    }while(ptr != head);
    printf("\n");
}

void showlistrev(struct node* head)
{
    struct node* ptr = head->prev ;
    do
    {
        printf("%d ",ptr->data);
        ptr = ptr->prev ;
    }while(ptr != head);
    printf("\n");
}

int main()
{
    createnode(head);
    createnew(head);
    showlist(head);
    showlistrev(head);
    return 0;
}