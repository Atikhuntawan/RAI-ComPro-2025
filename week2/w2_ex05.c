#include <stdio.h>

int main() {
    char name[100];
    char surname[100];
    int age;
    float height;
    char uni[100];

    
    printf("Enter your full name: ");
    scanf("%s",name);
    scanf("%s",surname);

    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter you University name: ");
    scanf("%s",uni);
    
    printf("Hi! Everyone. This is %.1s.%s from %s. I am %d years old and my height is %.1f cm tall.\n",surname,name,uni,age,height);
    
    return 0;
}
