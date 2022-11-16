#include<stdio.h>

int main()
{
    int i,count=0;
    char a[20];
    printf("Enter The String : \n");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    printf("Number Of Spaces in the String : %d",count);
    return 0;
}
