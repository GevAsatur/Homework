#include <stdio.h>

int main() {
    int num;

    
    printf("Enter a positive number: ");
    scanf("%d", &num);

    
    if (num & 1) {
        printf("%d is an ODD number\n", num);
    } else {
        printf("%d is an EVEN number\n", num);
    }

    return 0;
}

