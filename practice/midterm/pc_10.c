#include <stdio.h>

int main(void) {
    int A, B, op;
    if (scanf("%d %d %d", &A, &B, &op) != 3) return 0;

    switch (op) {
        case 1: // +
            printf("%d\n", A + B);
            break;
        case 2: // -
            printf("%d\n", A - B);
            break;
        case 3: // *
            printf("%d\n", A * B);
            break;
        case 4: // /
            if (B == 0) {
                printf("Error: division by zero\n");
            } else {
                printf("%.2f\n", (double)A / B);
            }
            break;
        case 5: // %
            if (B == 0) {
                printf("Error: modulo by zero\n");
            } else {
                printf("%d\n", A % B);
            }
            break;
        default:
            printf("Invalid operation\n");
    }
    return 0;
}
