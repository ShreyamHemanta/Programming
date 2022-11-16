//Addition of Sparsh matrix

#include <stdio.h>

int create(int arr[][20],int t[][3], int c, int n)
{
    int i, j, l = 1;
    t[0][0] = n;
    t[0][1] = n;
    t[0][2] = c;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
            {
                t[l][0] = i;
                t[l][1] = j;
                t[l][2] = arr[i][j];
                l++;
            }
        }
    }
    printf("\nThe triplet form of the given sparse matrix is:\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%3d", t[i][j]);
        printf("\n");
    }
    return l;
}
int add(int m1[][3],int m2[][3],int m3[][3],int n1,int n2)
{

    int c=0;
    int p1,p2;
    p1=p2=1;
    int p3=1;
    while(p1<=n1 || p2<=n2)
    {
        if (m1[p1][0]==m2[p2][0])
        {
            if(m1[p1][1]==m2[p2][1])
            {
                m3[p3][0]=m1[p1][0];
                m3[p3][1]=m1[p1][1];
                m3[p3][2]=m1[p1][2]+m2[p2][2];
                p1++;
                p2++;
                p3++;
            }
            else if (m1[p1][1]>m2[p2][1])
            {
                m3[p3][0]=m2[p2][0];
                m3[p3][1]=m2[p2][1];
                m3[p3][2]=m2[p2][2];
                p2++;
                p3++;
            }
            else
            {
                m3[p3][0]=m1[p1][0];
                m3[p3][1]=m1[p1][1];
                m3[p3][2]=m1[p1][2];
                p1++;
                p3++;
            }
        }
        else if (m1[p1][0]>m2[p2][0])
        {
            m3[p3][0]=m2[p2][0];
            m3[p3][1]=m2[p2][1];
            m3[p3][2]=m2[p2][2];
            p2++;
            p3++;
        }
        else
        {
            m3[p3][0]=m1[p1][0];
            m3[p3][1]=m1[p1][1];
            m3[p3][2]=m1[p1][2];
            p1++;
            p3++;
        }
    }
    m3[0][2]=p3-1;
    printf("Result in table form\n");

     for (int i=0; i<p3; i++)
	{
		for (int j=0; j<3; j++)
			printf("%d ", m3[i][j]);
		printf("\n");
	}
   return p3;
}
int main()
{
    int arr[20][20], n, c = 0, i, j,c1[20][3]= {0},c3[20][3]= {0},c4[40][3]= {0};
    int arr2[20][20], n2, c2 = 0, i2, j2;
    printf("\nEnter the size of the sparse matrix: ");
    scanf("%d", &n);
    printf("\nEnter the array elements.\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
        if (arr[i][j] != 0)
            c++;
    }
    int s =create(arr, c1,c, n);
    printf("\nEnter the size of the 2 nd sparse matrix: ");
    scanf("%d", &n2);
    printf("\nEnter the array elements.\n");
    for (i2 = 0; i2 < n2; i2++)
    {
        for (j2 = 0; j2 < n2; j2++)
            scanf("%d", &arr2[i2][j2]);
        if (arr[i2][j2] != 0)
            c2++;
    }
     int e =create(arr2,c3, c2, n2);
    int v = add(c1,c3,c4,n,n2);
    return 0;
}