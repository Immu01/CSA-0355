#include <stdio.h>

int main()
{
    int i, j, m, n, sum = 0;
    printf("Enter the number of rows: ");
    scanf(" %d ", &m);
    printf("Enter the number of columns: ");
    scanf(" %d ", &n);
    int a[m][n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf(" %d ", &a[i][j]);
        }
    }
    printf("The elements of the array are: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
        }
        printf("The sum of the elements of row %d is %d.\n", i + 1, sum);
        sum = 0;
    }

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            sum = sum + a[i][j];
        }
        printf("The sum of the elements of column %d is %d.\n", j + 1, sum);
        sum = 0;
    }
    return 0;
}