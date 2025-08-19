#include <stdio.h>

int main() {
    int r;
    int c;
    int result;
    
    do {
        printf("Input your row (1...12)     : ");
        scanf("%d",&r);
        printf("Input your column (1...12)  : ");
        scanf("%d",&c);
    }while(r < 1 || r > 12 || c < 1 || c > 12);
    
    for (int i = 1; i <= r; i++){
        for (int j = 1; j <= c; j++){
            result = i * j;
            printf("%4d",result);
        }
        printf("\n");
    }
    return 0;
}