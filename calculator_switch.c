#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("1 Add \n");
    printf("2 Sub \n");
    printf("3 Mul \n");
    printf("4 Div \n");
    printf("Enter the choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Addition is: %d", a + b);
            break;
        case 2:
            printf("Substraction is: %d", a - b);
            break;
        case 3:
            printf("Multiply is: %d", a * b);
            break;
        case 4:
            printf("Division is: %d", a / b);
            break;
        default:
            printf("No operation found");
    }

    return 0;
}
