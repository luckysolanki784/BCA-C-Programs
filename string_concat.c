#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "HELLO ";
    char b[20] = "GUYS";

    strcat(a, b);

    printf("String is = %s", a);

    return 0;
}