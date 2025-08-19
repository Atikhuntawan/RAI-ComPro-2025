#include <stdio.h>

int main(void) {
    long long x;
    printf("Enter a non-negative integer: ");
    if (scanf("%lld", &x) != 1 || x < 0) return 0;

    long long n = x;
    int digits = 0;
    int sum = 0;

    if (n == 0) {            
        digits = 1;
        sum = 0;
    } else {
        while (n > 0) {
            sum += n % 10;   
            digits++;        
            n /= 10;         
        }
    }

    printf("Digits = %d\n", digits);
    printf("Sum of digits = %d\n", sum);
    return 0;
}
