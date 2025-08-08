#include <stdio.h>

int main() {
    int num; 
    int i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table for %d:\n", num);

    for (i = 1; i <= 12; i++) {
        printf("%d × %d = %d\n", num, i, num * i);
    }

    return 0;
}
