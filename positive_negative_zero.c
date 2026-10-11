#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Positive: %d", number);
    } else if (number < 0) {
        printf("Negative: %d", number);
    } else {
        printf("Number is zero");
    }

    return 0;
}
