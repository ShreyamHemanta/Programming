#include <stdio.h>

int main()
{
    int n, i, j, e;
    int matrix[20][20] = {0};

    printf("Enter the size of Magic Matrix: ");
    scanf("%d", &n);

    i = n-1;
    j = n/2;
    e = 1;
    while (e < (n*n)+1)
    {
        matrix[i][j] = e;
            
        if (e % n == 0)
        {
            i--;
        }

        else
        {
            if ((i == n-1) && (j == 0))
            {
                i--;
            }
            else if (i==n-1)
            {
                i = 0;
                j--;
            }
            else if (j == 0)
            {
                j = n-1;
                i++;
            }
            else
            {
                j--;
                i++;
            }
        }
        e++;
    } 

    printf("\nThe Magic Matrix of %dx%d is :\n", n, n);
    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d", matrix[i][j]);
            if (matrix[i][j] < 10)
            {
                printf("   ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}