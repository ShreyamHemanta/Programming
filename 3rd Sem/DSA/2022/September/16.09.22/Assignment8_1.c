//Sparsh Matrix to Triplet Format using Array

#include<stdio.h>

void creatematrix()
{
    int n,count=0;
    printf("Enter the order of sparsh matrix : ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements of the sparsh matrix \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
            {
                count++;
            }
        }
    }
    printf("The sparsh matrix is :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int b[count][3];
    b[0][0]=n;
    b[0][1]=n;
    b[0][2]=count;
    int x=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                b[x][0]=i;
                b[x][1]=j;
                b[x][2]=a[i][j];
                x++;
            }
        }
    }
    printf("\nTriplet Format :\n");
    for(int i=0;i<count+1;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    creatematrix();
    return 0;
}