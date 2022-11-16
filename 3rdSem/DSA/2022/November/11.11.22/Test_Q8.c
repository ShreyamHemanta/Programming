#include<stdio.h>
#include<stdlib.h>

struct tree {
    int data;
    struct tree* lc,* rc;
};

int createTree (struct tree *Root) { 
    struct tree *new = (struct tree* )malloc(sizeof(struct tree));
    printf("Enter data : ");
    scanf("%d",&new->data);
    if(new->data > Root->data)
        Root->lc = new;
    else
        Root->rc = new;
}

int display (struct tree *Root) {
    struct tree *ptr = (struct tree *)malloc(sizeof(struct tree));
    printf("%d ",Root->data);
    if(ptr->data > Root->data) {
        printf("%d ",ptr->rc->data);
        ptr=ptr->rc;
        display(ptr);
    }
    else {
        printf("%d ",ptr->lc->data);
        ptr=ptr->lc;
        display(ptr);
    }
}

int maximum(struct tree *Root) {
    int max;
    struct tree *ptr = (struct tree* )malloc(sizeof(struct tree));
    if(Root->data > (Root->rc)->data)
        max = Root->data;
    else {
        max = (Root->rc)->data;
        maximum(Root->rc);
    }
    return max;
}

int minimum(struct tree *Root) {
    int min;
    struct tree *ptr = (struct tree* )malloc(sizeof(struct tree));
    if(Root->data > (Root->lc)->data)
        min = Root->data;
    else {
        min = (Root->lc)->data;
        minimum(Root->lc);
    }    
    return min;
}

int main() {
    int ch=1;
    struct tree *Root = (struct tree*)malloc(sizeof(struct tree));
    struct tree *ptr = (struct tree*)malloc(sizeof(struct tree));
    ptr = Root;
    while(ch==1) { 
        createTree(ptr);
        printf("Do you want to another node : ");
        scanf("%d",&ch);
    }
    if(ptr->data > Root->data)
        ptr=ptr->rc;
    else
        ptr=ptr->lc;
    maximum(Root);
    minimum(Root);
    display(Root);
    return 0;
}