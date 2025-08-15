#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, 0, -1},
        {-1, 2, 3},
        {2, 4, 5}
    };
    int C[3][3]; 
    int sum = 0;

    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                sum += A[i][k] * A[k][j];
            }
            C[i][j] = sum;
        }
    }

    printf("A x A =\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}