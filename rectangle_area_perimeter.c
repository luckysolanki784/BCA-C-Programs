#include <stdio.h>

int main() {
    float l, b, perimeter, area;

    printf("Enter the length: ");
    scanf("%f", &l);

    printf("Enter the breadth: ");
    scanf("%f", &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("Area is %.2f\n", area);
    printf("Perimeter is %.2f\n", perimeter);

    return 0;
}
