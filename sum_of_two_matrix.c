#include <stdio.h>

int main()
{
    int i, j;
    int a[2][2], b[2][2], sum[2][2];

    printf("Enter the first matrix : ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the second matrix : ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of two matrix is : \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}