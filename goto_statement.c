#include <stdio.h>

int main() {
    printf("Hello\n");
    
    goto end; 

    printf("LUCKY\n");

    end:
    printf("Bye\n");
    
    return 0;
}
