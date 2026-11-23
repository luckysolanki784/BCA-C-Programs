#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "Hello";
    char b[20];

    strcpy(b, a);

    printf("Original : %s", a);
    printf("\nCopy Data : %s", b);

    return 0;
}