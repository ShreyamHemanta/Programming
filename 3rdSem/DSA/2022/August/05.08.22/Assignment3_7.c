#include <stdio.h>

int main()
{
    int i,j,n,count=0,sum=0,mul1=1,mul2=1;
    printf("\nEnter the Order of the matrix : ");
    scanf("%d",&n);
    int a[n][n];
    printf("\nEnter the elements of the matrix :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                count+=1;
            }
        }
    }
    printf("The number of non zero elements in the matrix is : %d\n\n",count);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("The sum of elements above the leading diagonal is : %d\n",sum);
    
    printf("\nThe elements below minor diagonal : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>n-j)
            {
                printf("%d  ",a[i][j]);
            }
        }
        printf("\n");
    }    

    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                mul1*=a[i][j];
            }
        }
    }
    printf("The prodect of elements above the leading diagonal is : %d\n",mul1);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            {
                mul2*=a[i][j];
            }
        }
    }
    printf("\nThe product of elements below the leading diagonal is : %d\n",mul2);
    return 0;
}