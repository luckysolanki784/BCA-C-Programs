#include <stdio.h>

void evenodd_checker(int n)
{
    if (n % 2 == 0)
    {
        printf("Even no.");
    }
    else
    {
        printf("Odd no");
    }
}

int main()
{
    evenodd_checker(10);
    printf("\n");
    evenodd_checker(7);

    return 0;
}
