#include <stdio.h>

int main() {
    char name[50], course[50], college[50];
    int roll_no;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter course: ");
    scanf("%s", course);

    printf("Enter the name of college: ");
    scanf("%s", college);

    printf("Enter roll no: ");
    scanf("%d", &roll_no);

    printf("Name: %s\n", name);
    printf("Course: %s\n", course);
    printf("College: %s\n", college);
    printf("Roll No: %d\n", roll_no);

    return 0;
}
