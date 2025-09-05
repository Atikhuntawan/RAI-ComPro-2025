#include <stdio.h>

int main() {
    int total_seconds = 0;
    struct Time {
        int minute;
        int second;
    };
    struct Time t[3];
    
    for (int i = 0; i < 3; i++) {
        printf("Time input (m:s): ");
        scanf("%d:%d", &t[i].minute, &t[i].second);

        total_seconds += t[i].minute * 60 + t[i].second;
    }

    printf("Total time elapsed: %d second(s)\n", total_seconds);
    return 0;
}