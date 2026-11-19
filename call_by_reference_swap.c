#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;
    printf("Enter the no: ");
    scanf("%d %d", &num1, &num2);
    printf("Before Swapping %d %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After Swapping %d %d", num1, num2);
    return 0;
}