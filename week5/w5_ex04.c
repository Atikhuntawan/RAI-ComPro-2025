#include <stdio.h>

int main() {
    int num[10];
    int count_even = 0;
    int count_odd = 0;
    int check;
    
    for (int n = 0; n<10; n++){
        printf("Enter value %d: ",n+1);
        scanf("%d",&num[n]);
        
        check = num[n]%2;
        if (check == 0){
            count_even += 1;
        }
        else{
            count_odd += 1;
        }
    }
    
    printf("\nEven numbers: %d\n",count_even);
    printf("odd numbers: %d\n",count_odd);

    return 0;
}