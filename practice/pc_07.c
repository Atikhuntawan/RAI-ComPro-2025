#include <stdio.h>

int main(void) {
    int N, a[100];
    if (scanf("%d", &N) != 1 || N < 1 || N > 100) return 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    int min = a[0], max = a[0];
    long long sum = 0;

    for (int i = 0; i < N; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
        sum += a[i];
    }

    double avg = (double)sum / N;
    printf("Min = %d\nMax = %d\nAvg = %.2f\n", min, max, avg);
    return 0;
}
