#include <stdio.h>

int sum_odd(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0) sum += arr[i];
    return sum;
}

int sum_even(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0) sum += arr[i];
    return sum;
}

int main() {
    int n;
    printf("Enter total number of integers: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Input integer %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    printf("Sum of even numbers: %d\n", sum_even(arr, n));
    printf("Sum of odd numbers: %d\n",  sum_odd (arr, n));
    return 0;
}