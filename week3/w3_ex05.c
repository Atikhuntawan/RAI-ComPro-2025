#include <stdio.h>

int main() {
    float hight;
    float radius;
    float volume;

    printf("Enter cone hight: ");
    scanf("%f",&hight);
    printf("Enter cone base radius: ");
    scanf("%f",&radius);    

    volume = (1.0/3.0)*3.14*radius*radius*hight;
    printf("\nCone volume = %.1f",volume);

    if (volume > 260){
        printf("\nThis cone is perfect for Supun project\n");
    }
    else {
        printf("\nThis cone is not fit for this project\n");    
    }
    return 0;
}