//Addition of Sparsh Matrix

#include<stdio.h>

void addmatrix()
{
    int n,count=0;
    printf("For 1st sparsh matrix :\n\n");
    printf("Enter the order of 1st sparsh matrix : ");
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
    printf("\nTriplet Format of 1st sparsh matrix :\n");
    for(int i=0;i<count+1;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    int count1=0;
    printf("For 2nd sparsh matrix :\n\n");
    int m;
    printf("Enter the order of 2nd sparsh matrix : ");
    scanf("%d",&m);
    int c[m][m];
    printf("Enter the elements of the sparsh matrix \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&c[i][j]);
            if(c[i][j]!=0)
            {
                count1++;
            }
        }
    }
    int d[count1][3];
    d[0][0]=m;
    d[0][1]=m;
    d[0][2]=count1;
    int y=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(c[i][j]!=0)
            {
                d[y][0]=i;
                d[y][1]=j;
                d[y][2]=c[i][j];
                y++;
            }
        }
    }
    printf("\nTriplet Format of 2nd sparsh matrix :\n");
    for(int i=0;i<count1+1;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
    int e[count+count1][3];

    //Addition code left
    
    printf("Matrix after addition is :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    addmatrix();
    return 0;
}