#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i <= n / i; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int print_primes_in_range(int L, int R) {
    if (L > R) { 
        int t = L; 
        L = R; 
        R = t; 
    }
    if (L < 2) {
        L = 2;
    }

    int first = 1;
    for (int n = L; n <= R; ++n) {
        if (is_prime(n)) {
            if (!first) printf(" ");
            printf("%d", n);
            first = 0;
        }
    }
    printf("\n");
}

int main() {
    int L, R;
    printf("Enter the start and end numbers: ");
    if (scanf("%d %d", &L, &R) != 2) return 1;

    printf("\nThe prime numbers within the intervals are:\n");
    print_primes_in_range(L, R);
    return 0;
}