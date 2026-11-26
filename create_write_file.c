#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("student.txt", "w");
    fprintf(fp, "Hello Students");
    fclose(fp);
    printf("Data saved successfully");
    return 0;
}