#include <stdio.h>

int main() {
    char name[100];
    int id;
    float math, phy, Eng;
    float gpa;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your ID: ");
    scanf("%d", &id);
    printf("Enter your math score: ");
    scanf("%f", &math);
    printf("Enter your physics score: ");
    scanf("%f", &phy);
    printf("Enter your English score: ");
    scanf("%f", &Eng);

    gpa = (math + phy + Eng) / 3;

    printf("\nHi %s(%d)! Your GPA is %.2f\n", name, id, gpa);

    return 0;
}
