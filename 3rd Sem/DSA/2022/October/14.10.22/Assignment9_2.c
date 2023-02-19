/*Implementatin of Circular Queue using Array*/

#include<stdio.h>

void cqinsert(int* queue,int* front,int* rear,int size,int item)
{

    if(*(front)==0 && *(rear)==(size-1))
    {
        printf("Overflow\n");
    }
    else if(*(rear)+1==*front)
    {
        printf("Overflow\n");
    }
    else if(*front==-1 && *rear==-1)
    {
        *front=0;
        *rear=0;
    }
    else
    {
        *rear=(*(rear)+1)%size;
    }
    *(queue+(*rear))=item;
}

int cqdel(int* queue,int* front,int* rear,int size,int value)
{
    if(*front==-1 && *rear==-1)
    {
        printf("Underflow\n");
    }
    else if(*front==*rear)
    {
        value=*(queue+(*front));
        *front=-1;
        *rear=-1;
    }
    else
    {
        value=*(queue+(*front));
        *front=((*front)+1)%size;
    }
    printf("%d\n",value);
}

void traversal(int queue[],int front,int rear,int size)
{   
    for(int i=front;i!=rear;i=(i+1)%size)
    {
        printf("%d",queue[i]);
    }
    printf("%d",queue[rear]);
}

int main()
{
    int size,front=-1,rear=-1,item,value,ch;
    char choice;
    printf("Enter the size of the queue: ");
    scanf("%d",&size);
    int queue[size];
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
                printf("Do you want to insert element (y/n) : ");
                scanf(" %c",&choice);
                do
                {
                printf("Enter element to insert: ");
                scanf("%d",&item);
                cqinsert(queue,&front,&rear,size,item);
                printf("Do you want to insert element (y/n) : ");
                scanf(" %c",&choice);
                }while(choice=='y');
                break;
            case 2:
                cqdel(queue,&front,&rear,size,value);
                break;
            case 3:
                traversal(queue,front,rear,size);
                break;
        } 
    }
    return 0;
}