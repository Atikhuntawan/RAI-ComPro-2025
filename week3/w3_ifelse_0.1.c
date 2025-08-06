#include <stdio.h>

int main() {
    int Num1;
    int Num2;
    int remainder;
    float ans;
    int calculator;
    
    printf("Enter Num1: ");
    scanf("%d", &Num1);
    printf("Enter Num2: ");
    scanf("%d", &Num2);
    
    printf("Calculator Menu:\n");
    printf("1. +\n2. -\n3. *\n4. /\n5. %%\n"); 
    
    printf("Choose menu: ");
    scanf("%d", &calculator);
    
    if (calculator == 1){
        ans = Num1 + Num2;
        printf("Ans: Num1 + Num2 = %.0f\n", ans);
    } 
    else if (calculator == 2){
        ans = Num1 - Num2;
        printf("Ans: Num1 - Num2 = %.0f\n", ans);
    } 
    else if (calculator == 3){
        ans = Num1 * Num2;
        printf("Ans: Num1 * Num2 = %.0f\n", ans);
    } 
    else if (calculator == 4){
        if (Num2 == 0) {
            printf("Error: Division by zero.\n");
        } else {
            ans =  Num1 / Num2;
            printf("Ans: Num1 / Num2 = %.2f\n", ans);
        }
    } 
    else if (calculator == 5){
        if (Num2 == 0) {
            printf("Error: Modulo by zero.\n");
        } else {
            remainder = Num1 % Num2;
            printf("Ans: Num1 %% Num2 = %d\n", remainder);
        }
    } 
    else {
        printf("please correct menu selection.\n");
    }

    return 0;
}
