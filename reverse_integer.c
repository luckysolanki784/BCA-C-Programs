#include <stdio.h>

int main()
{
    int n, rev = 0, rem, temp;

    printf("Enter the no.: ");
    scanf("%d", &n);

    temp = n;  

    while(n > 0)
    {
        rem = n % 10;           
        rev = rev * 10 + rem;  
        n = n / 10;            
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
