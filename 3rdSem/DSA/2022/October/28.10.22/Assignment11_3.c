//Tree using linked list and without recurssion

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

typedef struct tree
{
    int data;
    struct tree *leftChild, *rightChild;
}Tree;

Tree* stack[MAXSIZE];
int top = -1;

void push(Tree *ptr)
{
    stack[++top] = ptr;
}

Tree* pop()
{
    return stack[top--];
}

void buildTree(Tree *ptr)
{
    char userInput;
    printf("Enter data: ");
    scanf("%d", &ptr->data);

    printf("Do you want to enter left child of %d (Y/N): ", ptr->data);
    scanf(" %c", &userInput);
    if (userInput == 'y' || userInput == 'Y')
    {
        Tree *new = (Tree *) malloc(sizeof(Tree));
        ptr -> leftChild = new;
        new -> leftChild = new -> rightChild = NULL;
        buildTree(new);
    }

    printf("Do you want to enter right child of %d (Y/N): ", ptr->data);
    scanf(" %c", &userInput);
    if (userInput == 'y' || userInput == 'Y')
    {
        Tree *new = (Tree *) malloc(sizeof(Tree));
        ptr -> rightChild = new;
        new -> leftChild = new -> rightChild = NULL;
        buildTree(new);
    } 
}
 
void InOrder(Tree *Root)
{
    top = -1;
    Tree *ptr = Root;
    while (1)
    {
        if (ptr)
        {
            push(ptr);
            ptr = ptr -> leftChild;
        }

        else
        {
            if (top != -1)
            {
                ptr = pop();
                printf("%d ", ptr-> data);
                ptr = ptr -> rightChild;
            }

            else
                return;
        }
    }

}

void PreOrder(Tree *Root)
{
    top = -1;
    Tree *ptr = Root;
    while (1)
    {
        printf("%d ", ptr -> data);

        if (ptr -> rightChild)
            push(ptr -> rightChild);

        if (ptr -> leftChild)
            ptr = ptr->leftChild;

        else
        {
            ptr = pop();
            if (top==-1 && ptr->leftChild==NULL && ptr->rightChild==NULL)
            {
                printf("%d", ptr -> data);
                return;
            }
        }
    }
}

void PostOrder(Tree *Root)
{
    top = -1;
    Tree *ptr = Root;
    do
    {
        while(ptr)
        {
            if (ptr -> rightChild)
                push(ptr -> rightChild);
            push(ptr);
            ptr = ptr -> leftChild;
        }

        ptr = pop();
        if (ptr->rightChild && stack[top] == ptr->rightChild)
        {
            pop(stack);
            push(ptr);
            ptr = ptr -> rightChild;
        }

        else
        {
            printf("%d ", ptr -> data);
            ptr = NULL;
        }
    }while(top != -1);
}

int main()
{

    Tree *Root = (Tree *) malloc(sizeof(Tree));
    buildTree(Root);

    printf("\nNon-Recursive Pre Order Traversal: ");
    PreOrder(Root);

    printf("\nNon-Recursive In order Traversal: ");
    InOrder(Root);

    printf("\nNon-Recursive Post Order Traversal: ");
    PostOrder(Root);

    return 0;
}