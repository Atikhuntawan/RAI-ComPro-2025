#include <stdio.h>

int main() {
    struct Vector {
        float x;
        float y;
    };

    struct Problem {
        struct Vector u;
        struct Vector v;
        struct Vector sum;
    };
    struct Problem P;

    printf("u_x: "); scanf("%f", &P.u.x);
    printf("u_y: "); scanf("%f", &P.u.y);
    printf("v_x: "); scanf("%f", &P.v.x);
    printf("v_y: "); scanf("%f", &P.v.y);

    P.sum.x = P.u.x + P.v.x;
    P.sum.y = P.u.y + P.v.y;

    printf("Resultant vector is equivalence to %.1fi + %.1fj\n",
           P.sum.x, P.sum.y);
    return 0;
}
