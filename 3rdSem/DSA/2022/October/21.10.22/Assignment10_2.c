//WAP to implement DEQUE and perform the following operations: 1. Insertion 2. Deletion 3. Traversal

#include<stdio.h>
#include<stdlib.h>

void enqueue(int *queue,int *front,int *rear,int maxsize,int item)
{
    if(*rear==maxsize)
    {
        printf("Overflow\n");
    }
    else if(*rear==-1 && *front==-1)
    {
        *front=0;
        *rear=0;
    }
    else
    {
        *(rear)++;
    }
    *(queue+(*rear))=item;
}

void deque(int *queue,int *front,int* rear,int value)
{
    if(*rear==-1 && *front==-1)
    {
        printf("Underflow\n");
    }
    else if(*rear==*front)
    {
        value=*(queue+(*front));
        *rear=-1;
        *front=-1;
    }
    else
    {
        value=*(queue+(*front));
        *(front)++;
    }
    printf("Deleted Value : %d\n",value);
}

int main()
{
    int front=-1,rear=-1,size,item,ch,value;
    printf("Enter the size of the queue: ");
    scanf("%d",&size);
    int queue[size],maxsize=size-1;
    while(ch!=3)
    {
        printf("Enter your choice (1.Insertion 2.Deletion 3.Traversal): ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter Element to insert: ");
                scanf("%d",&item);
                enqueue(queue,&front,&rear,maxsize,item);
                break;
            case 2:
                deque(queue,&front,&rear,value);
            //case 3:

        }
    }
    return 0;
}