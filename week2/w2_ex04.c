#include <stdio.h>

int main() {
    char name[100];
    int ID;
    float compro;
    float phy;
    float cal;
    float gpa;
    
    printf("Enter your Name: ");
    scanf("%s",name);
    printf("Enter your student ID: ");
    scanf("%d",&ID);
    printf("Enter your Programming score: ");
    scanf("%f",&compro);
    printf("Enter your Physics score: ");
    scanf("%f",&phy);
    printf("Enter your Calculus score: ");
    scanf("%f",&cal);
    
    gpa = (compro+phy+cal)/3;
    
    printf("Hi %s(%d)! Your GPA is %.2f",name,ID,gpa);
    
    return 0;
}
