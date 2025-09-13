#include <stdio.h>

int main(void) {
    int n;
    int fac = 1; 

    do {
        printf("Input your number (0..12): ");
        if (scanf("%d", &n) != 1) return 0;   
    } while (n < 0 || n > 12);

    for (int i = 1; i <= n; i++) {
        fac *= i;
    }

    printf("%d! is %d\n", n, fac);
    return 0;
}
