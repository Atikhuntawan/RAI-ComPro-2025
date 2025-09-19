#include <stdio.h>

int n1;
int n2;

int sum_square(int n1,int n2){
    int result = (n1 * n1) + (n2 * n2);
    return result;
}

int main() {
    printf("Enter the two integers: ");
    scanf("%d %d",&n1,&n2);

    
    printf("Sum of squares of %d and %d is %d\n",n1,n2,sum_square(n1,n2));
    return 0;
}