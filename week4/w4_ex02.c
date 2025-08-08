#include <stdio.h>

int main() {
    int count = 1; 
    int num; 
    int sum = 0;

    while (count <= 10) {
        printf("%d.Enter the number: ", count);
        scanf("%d", &num);
        sum = sum + num;
        count++;
    }

    printf("\nTotal sum is %d\n", sum);

    return 0;
}
