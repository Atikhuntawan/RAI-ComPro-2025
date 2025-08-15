#include <stdio.h>

int main() {
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    int number[n];
    
    for (int i=0; i<n; i++){
        printf("Enter integer %d: ",i+1);
        scanf("%d",&number[i]);
    }
    
    for (int i = 0; i < n; i++) {
        int alreadyCounted = 0;

        for (int k = 0; k < i; k++) {
            if (number[k] == number[i]) {
                alreadyCounted = 1;
                break;
            }
        }
        if (alreadyCounted == 1) {
            continue; 
        }

        int count = 0;
        for (int j = 0; j < n; j++) {
            if (number[j] == number[i]) {
                count++;
            }
        }

        printf("\nElement %d occurs %d times", number[i], count);
    }

    return 0;
}