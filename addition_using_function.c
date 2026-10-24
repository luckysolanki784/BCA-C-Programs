// Functions in C

#include <stdio.h>

// Function Declaration
int add(int, int);

int main() {
    int result;
    result = add(20, 30);
    printf("Result is : %d", result);
    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}
