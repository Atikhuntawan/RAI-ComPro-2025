#include <stdio.h>

int main() {
    int Num1;
    int Num2;
    float ans;
    int calculator;
    int remainder;

    printf("Enter Num1: ");
    scanf("%d", &Num1);
    printf("Enter Num2: ");
    scanf("%d", &Num2);

    printf("Calculator Menu:\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n");

    printf("Choose menu: ");
    scanf("%d", &calculator);

    switch (calculator) {
        case 1:
            ans = Num1 + Num2;
            printf("Ans: Num1 + Num2 = %.0f\n", ans);
            break;

        case 2:
            ans = Num1 - Num2;
            printf("Ans: Num1 - Num2 = %.0f\n", ans);
            break;

        case 3:
            ans = Num1 * Num2;
            printf("Ans: Num1 * Num2 = %.0f\n", ans);
            break;

        case 4:
            if (Num2 == 0) {
                printf("Error: Division by zero.\n");
            } else {
                ans = (float) Num1 / Num2;
                printf("Ans: Num1 / Num2 = %.2f\n", ans);
            }
            break;

        case 5:
            if (Num2 == 0) {
                printf("Error: Modulo by zero.\n");
            } else {
                remainder = Num1 % Num2;
                printf("Ans: Num1 %% Num2 = %d\n", remainder);
            }
            break;

        default:
            printf("please correct menu selection.\n");
    }

    return 0;
}
