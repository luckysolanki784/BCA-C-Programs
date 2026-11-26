#include <stdio.h>

union data
{
    int a;
    float b;
};

int main()
{
    union data d[3];
    d[0].a = 10;
    d[1].b = 20.5;
    d[2].a = 30;
    printf("%d\n", d[0].a);
    printf("%.2f\n", d[1].b);
    printf("%d", d[2].a);
    return 0;
}