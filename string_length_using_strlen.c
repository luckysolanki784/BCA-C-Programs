#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];

    printf("Enter the name : ");
    scanf("%s", name);

    printf("Length of name is : %d", strlen(name));

    return 0;
}