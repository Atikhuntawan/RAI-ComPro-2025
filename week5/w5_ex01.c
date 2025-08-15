#include <stdio.h>

int main() {
    int values[10];

    for (int n = 0; n < 10; n++) {
        printf("Enter the value %d here: ", n + 1);
        scanf("%d", &values[n]);     
    }

    printf("Values in array are: ");
    for (int n = 0; n < 10; n++) {
        printf("%d", values[n]);
        if (n < 9) printf(", ");      
    }
    printf("\n");
    return 0;
}