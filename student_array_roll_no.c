#include <stdio.h>

struct student
{
    int rollno;
};

int main()
{
    struct student S[3];
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("Enter Roll No : ");
        scanf("%d", &S[i].rollno);
    }
    for(i = 0; i < 3; i++)
    {
        printf("Roll No : %d\n", S[i].rollno);
    }
    return 0;
}
