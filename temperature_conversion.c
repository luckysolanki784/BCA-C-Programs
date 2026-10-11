#include <stdio.h>

int main() {
    float c, f;

    printf("Enter temperature in celsius: ");
    scanf("%f", &c);
    f = c * 9 / 5 + 32;
    printf("Temperature in fahrenheit: %.1f\n", f);

    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Temperature in celsius: %.1f\n", c);

    return 0;
}
