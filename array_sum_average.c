#include <stdio.h>

int main()
{
    int arr[5], i, sum = 0;
    float avg;

    printf("Enter the number : ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = sum / 5.0;

    printf("Sum is : %d", sum);
    printf("\nAverage is : %f", avg);

    return 0;
}