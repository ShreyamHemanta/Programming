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
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nRows :\n");
    for(i=0;i<3;i++)
    {
        row_count=0;
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
            row_count=row_count+a[i][j];
        }
        printf("\nSum = %d\n",row_count);
    }
    printf("\nColumns :\n");
    for(j=0;j<3;j++)
    {
        col_count=0;
        for(i=0;i<3;i++)
        {
            printf("%d ",a[i][j]);
            col_count=col_count+a[i][j];
        }
        printf("\nSum = %d\n",col_count);
    }
    
    return 0;
}