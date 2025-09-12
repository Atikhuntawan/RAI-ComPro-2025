#include <stdio.h>

int main(){
    int array[6] = {3, 1, 2, 4, 5, 6};
    int *p = array;
    int sum = 0;

    for (int i = 0; i < 6 ; i++){
        sum += *p;
        p++;
    }
    printf("The sum of array is: %d\n", sum);
    return 0;
}