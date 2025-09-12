#include <stdio.h>

int main(){
    int array[6] = {3, 1, 2, 4, 5, 6};
    int *p   = array;
    int *end = array + 6;
    int max  = *p++;

    for (; p < end; p++){
        if (*p > max){
            max = *p;
        }
    }

    printf("Max value: %d\n", max);
    return 0;
}