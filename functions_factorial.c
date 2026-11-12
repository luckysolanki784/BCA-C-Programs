#include <stdio.h>


int calculateFactorial(int n)
{
    int fact = 1, i;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    result = calculateFactorial(num);

    printf("Factorial is : %d", result);

    return 0;
}
