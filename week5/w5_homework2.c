#include <stdio.h>

int main() {
    int temp;
    int A[3][3] = {
        {1, 0, -1},
        {-1, 2, 3},
        {2, 4, 5}
    };

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            if (c > r) {
                temp = A[r][c];   
                A[r][c] = A[c][r];
                A[c][r] = temp;
            }   
        }
    }


    printf("Transpose matrix of A =\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%3d ", A[r][c]);
        }
        printf("\n");
    }

    return 0;
}