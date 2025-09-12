#include <stdio.h>

int main(){
    int a = 0;
    int b = 5;

    int *x = &a;
    int *y = &b;

    printf("Before reverse: a = %d, b = %d\n", a, b);

    int t = *x;
    *x = *y;
    *y = t;

    printf("After  reverse: a = %d, b = %d\n", a, b);
    return 0;
}