#include<stdio.h>

int main()
{
    int i,j=0,n;
    char a[20],b[20];
    printf("Enter The String \n");
    scanf("%[^\n]s",a);
    for(n=0;a[n]!=0;n++);
    for(i=n/2;i<n;i++)
    {
        b[j++]=a[i];
    }
    for(i=(n/2)-1;i>=0;i--)
    {
        b[j++]=a[i];
    }
    b[j]=0;
    printf("New String is : \n%s",b);
    return 0;
}