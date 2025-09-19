#include <stdio.h>

struct student {
    char name[100];
    int  grade;
    int  pass;
};

int main(void){
    int n_stu;

    printf("Enter number of students: ");
    scanf("%d", &n_stu);

    struct student s[n_stu];
    float sum = 0.0f;

    printf("\n");
    for (int i = 0; i < n_stu; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter grade of %s: ", s[i].name);
        scanf("%d", &s[i].grade);

        sum += s[i].grade;
        s[i].pass = (s[i].grade >= 60);
        printf("\n");
    }

    float avg = sum / n_stu;

    int max = s[0].grade;
    int low = s[0].grade;
    for (int i = 1; i < n_stu; i++) {
        if (s[i].grade > max) {
            max = s[i].grade;
        }
        if (s[i].grade < low) {
            low = s[i].grade;
        }
    }

    printf("--- Results ----\n");
    printf("Average grade: %.2f\n", avg);
    printf("Highest grade: %d\n",   max);
    printf("Lowest grade: %d\n",    low);
    printf("Student who passed:\n");
    for (int i = 0; i < n_stu; i++) {
        if (s[i].pass) printf("%s\n", s[i].name);
    }
    return 0;
}