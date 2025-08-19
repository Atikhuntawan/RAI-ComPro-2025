#include <stdio.h>

int main(){
    int N;
    int sum = 0;

    
    printf("Input your number: ");
    scanf("%d",&N);
    
    for (int i = 1; i <= N;i++){

        if(i % 2 != 0){
            continue;
        }
        sum += i;
    }
    
    printf("Sum of even number from 1 to %d is %d\n",N,sum);

    return(0);
}