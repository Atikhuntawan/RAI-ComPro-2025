#include <stdio.h>

int main() {
    int number;
    int out;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    out = number%2;
    
    if (out == 0 && number > 1 && number < 100){
        printf("%d is even",number);
    }
    else if (out != 0 && number > 1 && number < 100){
        printf("%d is odd",number);
    }
    else {
        printf("%d is out of range",number);
    }
    return 0;
}