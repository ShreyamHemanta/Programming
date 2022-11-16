#include<stdio.h>
int main()
{
    int a[3][3],i,j,r,c,row_count=0,col_count=0;
    printf("Enter 9 Number :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter Row Number : ");
    scanf("%d",&r);

    for(i=0;i<3;i++)
    {
        if((i+1)==r)
        {
            for(j=0;j<3;j++)
            {
            printf("%d ",a[i][j]);
            row_count=row_count+a[i][j];
            }
            printf("\nSum = %d",row_count);
        }break;
    }

    printf("\nEnter Column Number : ");
    scanf("%d",&c);

    for(j=0;j<3;j++)
    {
        if((j+1)==c)
        {
            for(i=0;i<3;i++)
            {
                printf("%d ",a[i][j]);
                col_count=col_count+a[i][j];
            }
            printf("\nSum = %d",col_count);
        }break;
    }
    
    return 0;
}