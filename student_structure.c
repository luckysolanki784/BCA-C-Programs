
#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    struct student S1;
    printf("Enter the Roll No : ");
    scanf("%d", &S1.rollno);
    printf("Enter Name : ");
    scanf("%s", S1.name);
    printf("Enter Marks : ");
    scanf("%f", &S1.marks);
    printf("Roll no is : %d\n", S1.rollno);
    printf("Name is : %s\n", S1.name);
    printf("Marks is : %f\n", S1.marks);
    return 0;
}