#include <stdio.h>

int main() {
    int num_1;
    int num_2;
    int num_3;
    
    printf("Enter integer #1: ");
    scanf("%d",&num_1);
    printf("Enter integer #2: ");
    scanf("%d",&num_2);
    printf("Enter integer #3: ");
    scanf("%d",&num_3);
    
    int sum = num_1+num_2+num_3;
    float avg = sum/3;
    
    printf("\nResults:\n");
    if (num_1 < num_2 && num_1 < num_3){
        printf("Minimum: %d\n",num_1);
    }
    else if (num_2 < num_1 && num_2 < num_3){
        printf("Minimum: %d\n",num_2);
    }
    else {
        printf("Minimum: %d\n",num_3);
    }


    if (num_1 > num_2 && num_1 > num_3){
        printf("Maximum: %d\n",num_1);
    }
    else if (num_2 > num_1 && num_2 > num_3){
        printf("Maximum: %d\n",num_2);
    }
    else {
        printf("Maximum: %d\n",num_3);
    }
    
    printf("Sum: %d\n",sum);
    printf("Average: %.2f\n",avg);
    return 0;
}
