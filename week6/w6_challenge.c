#include <stdio.h>
#include <string.h>

int main() {
    float top = 0;
    int num = 0;
    float avg_math = 0;
    float avg_english = 0;
    float avg_science = 0;
    float avg_history = 0;
    float top_avg = 0;
    char subject[20];

    struct student {
        char name[20];
        int id;
        float score1;
        float score2;
        float score3;
        float score4;
        float avg;
    };
    struct student s[3];

    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: ", i+1);
        scanf("%s", s[i].name);
        printf("Student %d's ID: ", i+1);
        scanf("%d", &s[i].id);

        printf("Student %d's score1: ", i+1);
        scanf("%f", &s[i].score1);
        printf("Student %d's score2: ", i+1);
        scanf("%f", &s[i].score2);
        printf("Student %d's score3: ", i+1);
        scanf("%f", &s[i].score3);
        printf("Student %d's score4: ", i+1);
        scanf("%f", &s[i].score4);

        s[i].avg = (s[i].score1 + s[i].score2 + s[i].score3 + s[i].score4) / 4.0;
        printf("\n");
    }

    printf("Student Averages:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s (ID: %d): %.2f\n", s[i].name, s[i].id, s[i].avg);
    }

    if (s[0].avg > s[1].avg && s[0].avg > s[2].avg) {
        top = s[0].avg; num = 0;
    } else if (s[1].avg > s[0].avg && s[1].avg > s[2].avg) {
        top = s[1].avg; num = 1;
    } else {
        top = s[2].avg; num = 2;
    }
    printf("\nTop Student: %s with %.2f\n", s[num].name, s[num].avg);

    avg_math    = (s[0].score1 + s[1].score1 + s[2].score1) / 3.0;
    avg_english = (s[0].score2 + s[1].score2 + s[2].score2) / 3.0;
    avg_science = (s[0].score3 + s[1].score3 + s[2].score3) / 3.0;
    avg_history = (s[0].score4 + s[1].score4 + s[2].score4) / 3.0;

    printf("\n");
    printf("Subject Averages:\n");
    printf("Math: %.2f\n",    avg_math);
    printf("English: %.2f\n", avg_english);
    printf("Science: %.2f\n", avg_science);
    printf("History: %.2f\n", avg_history);
    printf("\n");

    if (avg_math >= avg_english && avg_math >= avg_science && avg_math >= avg_history) {
        top_avg = avg_math; strcpy(subject, "Math");
    } else if (avg_english >= avg_math && avg_english >= avg_science && avg_english >= avg_history) {
        top_avg = avg_english; strcpy(subject, "English");
    } else if (avg_science >= avg_math && avg_science >= avg_english && avg_science >= avg_history) {
        top_avg = avg_science; strcpy(subject, "Science");
    } else {
        top_avg = avg_history; strcpy(subject, "History");
    }

    printf("Top Subject: %s with average %.2f\n", subject, top_avg);
    return 0;
}
