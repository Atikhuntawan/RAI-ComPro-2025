#include <stdio.h>

int main() {
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int reversed[8];

    for (int i = 0; i < 9; i++) {
        reversed[i] = original[8 - i]; 
    }

    printf("Reversed Array: ");
    for (int i = 0; i < 9; i++) {
        printf("%d", reversed[i]);
        if (i < 8) printf(" ");      
    }
    printf("\n");
    return 0;
}