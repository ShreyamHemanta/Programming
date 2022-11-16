//wap to implement dequeue with insertion,deletion,display(input restricted , output restricted)
#include <stdio.h>
int Deque[50];
void InsertAtFront(int front,int rear,int item)
{
    if(front+1==rear)
    {
        printf("Overflow");
        return;
    }
    else
    {
        Deque[++front]=item;
    }
}
void InsertAtLast(int front,int rear,int item,int maxsize)
{
    if(front==rear-1)
    {
        printf("Overflow");
        return;
    }
    if(rear==-1)
    {
        rear=maxsize;
    }
    else
    {
        rear--;
    }
    Deque[rear]=item;
}
int DeleteFromFirst(int front)
{
    if(front==-1)
    {
        printf("Underflow");
    }
    else{
        return(Deque[front--]);
    }
}
int DeleteFromLast(int rear,int maxsize)
{
    if(rear==-1)
    {
        printf("Underflow");
        return;
    }
    if(rear==maxsize)
    {
        return(Deque[rear]);
        rear=-1;
    }
    else{
        return(Deque[rear--]);
    }
}
void display(int front,int rear)
{
    for(int i=front;i<rear;i++)
    {
        printf("%d ",Deque[i]);
    }
}
int main()
{
    int userInput,front=-1,rear=-1,item;

    while (1){
        printf("\n------------------------------------------------\n");
        printf("Insertion Restricted Queue:\n");
        printf("1: To insert into Queue\n");
        printf("2: To remove from Queue\n");
        printf("3: To display elements of Queue\n");

        printf("\nDeletion Restricted Queue:\n");
        printf("4: To insert into Queue\n");
        printf("5: To remove from Queue\n");
        printf("6: To display elements of Queue\n");
        
        printf("\n0: To exit\n");
        printf("Your choice: ");
        scanf("%d", &userInput);
        
        switch(userInput){
            case 1:
                printf("Enter item ");
                scanf("%d",&item);
                InsertAtLast(front,rear,item,50);
                break;

            case 2:
                printf("1: To delete from beginning\n");
                printf("2: To delete from end\n");
                printf("Enter your choice: ");
                scanf("%d", &userInput);
                if (userInput == 1)
                    DeleteFromFirst(front);
                else if (userInput == 2)
                    DeleteFromLast(rear,50);
                else
                    printf("INVALID INPUT\n");
                break;

            case 3:
                display(front,rear);
                break;

            case 4:
                printf("1: To insert at beginning\n");
                printf("2: To insert at end\n");
                printf("Enter your choice: ");
                scanf("%d", &userInput);
                if (userInput == 1)
                {
                    printf("Enter item ");
                    scanf("%d",&item);
                    InsertAtFront(front,rear,item);
                }
                else if (userInput == 2)
                {
                    printf("Enter item ");
                    scanf("%d",&item);
                    InsertAtLast(front,rear,item,50);
                }
                else
                    printf("INVALID INPUT\n");
                break;
            case 5:
                DeleteFromFirst(front);
                break;

            case 6:
                display(front,rear);
                break;
                
            case 0:
                exit(0);

            default:
                printf("INVALID INPUT\n");
        }
    }
    return 0;
}
