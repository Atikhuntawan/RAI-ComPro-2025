#include <stdio.h>

int main() {
    int integer_number;
    float float_number;
    char character;
    
    printf("Please enter an integer value: ");
    scanf("%d",&integer_number);
    printf("You entered %d\n",integer_number);

    printf("Please enter a float value: ");
    scanf("%f",&float_number);
    printf("You entered %.1f\n",float_number);
    
    printf("Please enter a character: ");
    scanf(" %c",&character);
    printf("You entered %c\n",character);

    return 0;
}