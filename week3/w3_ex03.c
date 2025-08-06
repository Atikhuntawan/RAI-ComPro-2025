#include <stdio.h>

int main() {
    int number;
    int out;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number >= 1 && number <= 100) {
        case 1:
            out = number % 2;
            switch (out) {
                case 0:
                    printf("%d is even\n", number);
                    break;
                case 1:
                    printf("%d is odd\n", number);
                    break;
            }
            break;

        case 0:  
            printf("%d is out of range\n", number);
            break;
    }

    return 0;
}
