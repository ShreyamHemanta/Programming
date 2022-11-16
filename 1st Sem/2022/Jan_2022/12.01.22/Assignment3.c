#include<stdio.h>
int main()
{
    int i=0,j,k;
    char a[50],b[50];
    printf("Enter the string : ");
    scanf("%s",a);
    char *x=&a[0],*y=&b[0];
    while(a[i]!='\0')
    i++;
    k=i-1;
    for(j=0;j<i;j++)
    {
    *(y+j)=*(x+(i-j-1));
    }
    *(y+i)='\0';
    printf("Forward : ");
    for(j=0;j<i;j++)
    {
        printf("%c",*(x+j));
    }
    printf("\nReverse : ");
    for(j=0;j<i;j++)
    {
        printf("%c",*(y+j));
    }
    return 0;
}