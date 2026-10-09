#include <stdio.h>

int main() {
    int num, i = 1;
    printf("Enter num: ");
    scanf("%d", &num);
    while(i <= num) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}
