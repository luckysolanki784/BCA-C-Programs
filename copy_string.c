#include <stdio.h>
int main()
{
    char a[30], b[30];
    int i;
    printf("Enter the string : ");
    scanf("%s", a);
    for(i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';
    printf("Copy string is %s", b);
    return 0;
}
