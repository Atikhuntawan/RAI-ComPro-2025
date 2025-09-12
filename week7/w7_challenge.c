#include <stdio.h>

int main(){
    int array[5];

    for (int i = 0; i < 5; i++){
        printf("Enter integer %d: ", i+1);
        scanf("%d", &array[i]);
    }

    for (int pass = 0; pass < 5 - 1; pass++) {
        int *p = array;
        for (int i = 0; i < 5 - 1 - pass; i++) {
            if (*p > *(p + 1)) {
                int t = *p;
                *p = *(p + 1);
                *(p + 1) = t;
            }
            p++;
        }
    }

    printf("\nSorted: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}