#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter a as first no.: ");
    scanf("%d", &a);

    printf("Enter b as second no.: ");
    scanf("%d", &b);

    printf("Enter c as third no.: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("First no. is big");
    } else if (b > a && b > c) {
        printf("Second no is big");
    } else {
        printf("Third no is big");
    }

    return 0;
}
