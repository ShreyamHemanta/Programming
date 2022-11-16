#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the length of array : ");
    scanf("%d",&i);
    int a[i];
    int *x=&a[0];
    for(j=0;j<i;j++)
    {
        printf("Enter the value at array[%d] : ",j);
        scanf("%d",&a[j]);
    }
    printf("\nForward :");
    for(j=0;j<i;j++)
    {
        printf(" %d ",*(x+j));
    }
    for(j=0;j<i/2;j++)
    {
        char temp=*(x+j);
        *(x+j)=*(x+(i-j-1));
        *(x+(i-j-1))=temp;
    }
    printf("\nReverse :");
    for(j=0;j<i;j++)
    {
        printf(" %d ",*(x+j));
    }
    return 0;
}