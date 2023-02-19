//Tree using Linked List and with recussion

#include<stdio.h>
#include<stdlib.h>

struct tree
{
    int data;
    struct tree* lc,* rc;
}; 

void buildtree(struct tree *ptr)
{
    struct tree* new;
    char ch;
    printf("Enter the value : ");
    scanf("%d",&ptr->data);
    ptr->lc=NULL;
    ptr->rc=NULL;
    
    printf("Do you want to add left tree of %d (y/n) : ",ptr->data);
    scanf(" %c",&ch);
    if(ch=='y' || ch=='Y')
    {
        new=(struct tree*)malloc(sizeof(struct tree));
        ptr->lc=new;
        buildtree(new);
    }

    printf("Do you want to add right tree of %d (y/n) : ",ptr->data);
    scanf(" %c",&ch);
    if(ch=='y' || ch=='Y')
    {
        new=(struct tree*)malloc(sizeof(struct tree));
        ptr->rc=new;
        buildtree(new);
    }
}

void preorder(struct tree* ptr)
{    
    if (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        preorder(ptr->lc);
        preorder(ptr->rc);
    }
}

void inorder(struct tree* ptr)
{
    if (ptr!=NULL)
    {
        inorder(ptr->lc);
        printf("%d ",ptr->data);
        inorder(ptr->rc);
    }
}

void postorder(struct tree* ptr)
{
    if (ptr!=NULL)
    {
        postorder(ptr->lc);
        postorder(ptr->rc);
        printf("%d ",ptr->data);
    }
}

void main()
{
    struct tree* root;
    int c;
    root=(struct tree*)malloc(sizeof(struct tree));
    buildtree(root);
    printf("Enter 1.Pre-Order 2.In-Order 3.Post-Order : ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            preorder(root);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            postorder(root);
            break;
    }
}