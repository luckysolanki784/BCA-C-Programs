#include <stdio.h>

int main()
{
    int n, rev = 0, rem, temp;

    printf("Enter the no.: ");
    scanf("%d", &n);

    temp = n;  // original no. ko save kar liya

    while(n > 0)
    {
        rem = n % 10;          // 1. last digit nikala
        rev = rev * 10 + rem;  // 2. reverse me joda
        n = n / 10;            // 3. last digit hataya
    }

    printf("Reverse no is: %d\n", rev);

    if(temp == rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("No Palindrome");
    }

    return 0;
}
