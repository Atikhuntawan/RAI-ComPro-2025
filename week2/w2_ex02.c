#include <stdio.h>

int main() {
    int Time;
    int hour;
    int min;

    printf("Enter total minutes: ");
    scanf("%d",&Time);
    
    hour = Time/60;
    min = Time%60;
    
    printf("%d minutes is %d hour(s) and %d minute(s)\n",Time,hour,min);

    return 0;
}