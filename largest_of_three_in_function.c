#include <stdio.h>

int largest(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

void main()
{
    int res;
    res = largest(10, 11, 13);
    printf("%d", res);

    printf("\n%d", largest(10, 12, 19));

}
