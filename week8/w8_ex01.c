#include <stdio.h>

float r;

float circumference(float r){
    float result = 2 * 3.14 * r;
    return result;
}

float area(float r){
    float result = 3.14 * r *r;
    return result;
}

int main() {
    printf("Enter the radius in cm: ");
    scanf("%f",&r);

    
    printf("Circumference: %.2f\n",circumference(r));
    printf("Circumference: %.2f\n",area(r));
    return 0;
}