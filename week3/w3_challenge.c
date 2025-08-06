#include <stdio.h>

int main() {
    int cal, phy, com;
    char grade_cal, grade_phy, grade_com;
    float point_cal, point_phy, point_com, gpa;

    printf("Calculus score: ");
    scanf("%d", &cal);
    printf("Physic score: ");
    scanf("%d", &phy);
    printf("compro score: ");
    scanf("%d", &com);

    // Calculus
    if (cal >= 80) {
        grade_cal = 'A'; 
        point_cal = 4.0;
    } else if (cal >= 70) {
        grade_cal = 'B'; 
        point_cal = 3.0;
    } else if (cal >= 60) {
        grade_cal = 'C'; 
        point_cal = 2.0;
    } else if (cal >= 50) {
        grade_cal = 'D'; 
        point_cal = 1.0;
    } else {
        grade_cal = 'F'; 
        point_cal = 0.0;
    }

    // Physics
    if (phy >= 80) {
        grade_phy = 'A'; 
        point_phy = 4.0;
    } else if (phy >= 70) {
        grade_phy = 'B'; 
        point_phy = 3.0;
    } else if (phy >= 60) {
        grade_phy = 'C'; 
        point_phy = 2.0;
    } else if (phy >= 50) {
        grade_phy = 'D'; 
        point_phy = 1.0;
    } else {
        grade_phy = 'F'; 
        point_phy = 0.0;
    }

    // Compro
    if (com >= 80) {
        grade_com = 'A'; 
        point_com = 4.0;
    } else if (com >= 70) {
        grade_com = 'B'; 
        point_com = 3.0;
    } else if (com >= 60) {
        grade_com = 'C'; 
        point_com = 2.0;
    } else if (com >= 50) {
        grade_com = 'D'; 
        point_com = 1.0;
    } else {
        grade_com = 'F'; 
        point_com = 0.0;
    }

    // GPA
    gpa = (point_cal + point_phy + point_com) / 3;

    printf("\n%-10s%-8s%-8s%-8s\n", "Subject", "Score", "Grade", "Grade");
    printf("----------------------------------------\n");
    printf("%-10s%-8d%-8c%.1f\n", "Cal", cal, grade_cal, point_cal);
    printf("%-10s%-8d%-8c%.1f\n", "Physics", phy, grade_phy, point_phy);
    printf("%-10s%-8d%-8c%.1f\n", "compro", com, grade_com, point_com);

    printf("\nGPA: %.1f\n", gpa);

    return 0;
}
