#include <stdio.h>

int main()
{
    int n, rem, sum = 0, temp;

    printf("Enter the no.: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        rem = n % 10;                  
        sum = sum + (rem * rem * rem); 
        n = n / 10;                    
    }

    if(temp == sum)
    {
        printf("%d is an Armstrong number", temp);
    }
    else
    {
        printf("%d is Not an Armstrong number", temp);
    }

    return 0;
}
