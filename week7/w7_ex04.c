#include <stdio.h>

int main(){
    int size = 6;
    int array[6] = {3, 1, 2, 4, 5, 6};
    int *p = array;

    for (int i = 0; i < 6 ; i++){
        printf("%d\n", *p);
        p++;
    }
    return 0;
}