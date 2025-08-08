#include <stdio.h>

int main() {
    int i; 
    int num; 
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is %d\n", num, fact);

    return 0;
}
