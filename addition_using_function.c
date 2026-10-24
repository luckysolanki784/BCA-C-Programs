// Functions in C
#include <stdio.h>

// Function Declaration
int add(int, int);

int main() {
    int result, result1;
    result = add(20, 30);
    result1 = add(40, 50);
    printf("Result is : %d\n", result);
    printf("Result is : %d", result1);
    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}
