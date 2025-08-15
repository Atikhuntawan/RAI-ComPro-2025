#include <stdio.h>

int main() {
    int total = 0;
    int mark[5];
    int highest = mark[0];

    for (int n = 0; n < 5; n++) {
        printf("Enter the marks of student %d: ",n+1);
        scanf("%d",&mark[n]);
        total += mark[n];
        
        if (mark[n] > highest) {
            highest = mark[n];
        }
    }
    printf("Total Marks : %d",total);
    printf("\nHighest Marks : %d\n",highest);

    return 0;
}