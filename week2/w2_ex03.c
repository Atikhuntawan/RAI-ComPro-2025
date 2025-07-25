#include <stdio.h>

int main() {
    char name[100];
    int age;
    float height;
    float weight;
    char gender[2];
    char Education[500];

    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("Enter your gender: ");
    scanf(" %s", gender);
    
    getchar();
    
    printf("Enter your Education Qualification: ");
    scanf("%[^\n]", Education);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender[0]);  
    printf("Height: %.1f\n", height);
    printf("Weight: %.1f\n", weight);
    printf("Education: %s\n", Education);

    return 0;
}
