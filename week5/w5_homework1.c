#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, 0, -1},
        {-1, 2, 3},
        {2, 4, 5}
    };

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            if (r != c) {
                A[r][c] = 0;
            }
        }
    }

    printf("Diagonal matrix of A =\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%3d ", A[r][c]);
        }
        printf("\n");
    }

    return 0;
}