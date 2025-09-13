#include <stdio.h>

int main(void) {
    int A[3][3];

    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 3; c++)
            scanf("%d", &A[r][c]);

    for (int r = 0; r < 3; r++) {
        for (int c = r + 1; c < 3; c++) {
            int tmp = A[r][c];
            A[r][c] = A[c][r];
            A[c][r] = tmp;
        }
    }

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%4d", A[r][c]);
        }
        printf("\n");
    }
    return 0;
}
