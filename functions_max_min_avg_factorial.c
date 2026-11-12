#include <stdio.h>


int maximum(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}


int minimum(int num1, int num2)
{
    if (num1 < num2)
        return num1;
    else
        return num2;
}


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
    int num1, num2, max, min;

    printf("Enter the first no.: ");
    scanf("%d", &num1);

    printf("Enter the second no.: ");
    scanf("%d", &num2);

    max = maximum(num1, num2);
    min = minimum(num1, num2);

    printf("Maximum is : %d\n", max);
    printf("Minimum is : %d\n", min);
    printf("Factorial of %d is : %d\n", num1, calculateFactorial(num1));
    printf("Factorial of %d is : %d", num2, calculateFactorial(num2));

    return 0;
}
