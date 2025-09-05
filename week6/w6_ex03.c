#include <stdio.h>
#include <math.h>

int main() {
    float distance;
    
    struct coordinate {
        float x;
        float y;
    };

    struct coordinate c[2];

    for (int i = 0; i < 2; i++) {
        printf("x%d: ", i+1);
        scanf("%f", &c[i].x);

        printf("y%d: ", i+1);
        scanf("%f", &c[i].y);
        printf("\n");
    }

    distance = sqrt((c[1].x - c[0].x)*(c[1].x - c[0].x) + (c[1].y - c[0].y)*(c[1].y - c[0].y));

    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",
           c[0].x, c[0].y, c[1].x, c[1].y, distance);

    return 0;
}
