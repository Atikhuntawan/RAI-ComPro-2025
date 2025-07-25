#include <stdio.h>

int main() {
    int first_number;
    int second_number;
    
    printf("Enter a number: ");
    scanf("%d",&first_number);
    printf("Enter a number: ");
    scanf("%d",&second_number);
    
    if (first_number == second_number){
        printf("Match");
    }
    else{
        printf("Does not match. Try again");
    }
    return 0;
}