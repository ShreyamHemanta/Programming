#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    int data;
    struct tree *lc,*rc;
}t;

void buildbst(t* ptr)
{
    int ch;
    printf("Do you want to enter  (1/0)\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        t*new;
        new=(t*)malloc(sizeof(t));
        printf("Enter the val ");
        scanf("%d",&new->data);
        new->lc=NULL;
        new->rc=NULL;
   
        if(new->data<ptr->data)
        {
            ptr->lc=new;
            buildbst(new);
        }
        else if(new->data>ptr->data)
        {
            ptr->rc=new;
            buildbst(new);
        }
    }
}

void pre(t* ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    else
    {
        printf("%d ",ptr->data);
        pre(ptr->lc);
        pre(ptr->rc);
    }
}

void post(t* ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    else
    {
        post(ptr->lc);
        post(ptr->rc);
        printf("%d ",ptr->data);
    }
}

void inver(t* ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    else
    {
        inver(ptr->lc);
        printf("%d ",ptr->data);
        inver(ptr->rc);
    }
}

int main()
{
    t*Root;
    Root=(t*)malloc(sizeof(t));
    printf("Enter the val ");
    scanf("%d",&Root->data);
    buildbst(Root);
    int c;
    printf("\nMENU:\n");
    printf("1.Execute InOrder Traversal\n");
    printf("2.Execute PreOrder Traversal\n");
    printf("3.Execute PostOrder Traversal\n");
    printf("Enter your choice.\n");
    scanf("%d",&c);
    printf("\nTHE TREE IS AS FOLLOWS:\n");
    switch(c)
    {
        case 1:
        inver(Root);
        break;
        case 2:
        pre(Root);
        break;
        case 3:
        post(Root);
        break;
        default:
        exit;
    }
}