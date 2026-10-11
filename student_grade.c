#include <stdio.h>

int main() {
    int marks;

    printf("Enter student's marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: A");
    } else if (marks >= 70) {
        printf("Grade: B");
    } else if (marks >= 50) {
        printf("Grade: C");
    } else if (marks >= 30) {
        printf("Grade: D");
    } else {
        printf("Grade: F");
    }

    return 0;
}
