#include <stdio.h>

int main() {
    int value[8];
    int Largest;
    int Smallest;
    
    printf("Enter number 1: ");
    scanf("%d", &value[0]);
    Largest = value[0];
    Smallest = value[0];
    
    for (int n = 1; n < 8; n++) {
        printf("Enter number %d: ", n + 1);
        scanf("%d", &value[n]);
        
        if (value[n] > Largest) {
            Largest = value[n];
        }
        if (value[n] < Smallest) {
            Smallest = value[n];
        }
    }
    
    printf("\nSmallest number: %d", Smallest);
    printf("\nLargest number: %d\n", Largest);

    return 0;
}