#include <stdio.h>

union data
{
    int a;
    float b;
    char c;
};

int main()
{
    union data d1;
    d1.a = 10;
    printf("Value of a = %d", d1.a);
    return 0;
}