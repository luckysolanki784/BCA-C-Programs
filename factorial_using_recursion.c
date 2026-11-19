#include <stdio.h>

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int num, result;
    printf("Enter the no: ");
    scanf("%d", &num);
    result = fact(num);
    printf("Factorial is: %d", result);
    return 0;
}