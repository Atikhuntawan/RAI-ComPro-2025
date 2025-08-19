#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);

    printf("first / second = %d", a/b);
    printf("\nfirst / second = %.3f", (double)a/b);
    printf("\nfirst %% second = %d", a%b);

    return(0);
}