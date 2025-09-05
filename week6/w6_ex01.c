#include <stdio.h>

int main() {
    struct student {
        char name[101];
        int age;
        float score;
    };
    struct student s[3];
    
    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: ", i+1);
        scanf(" %100[^\n]", s[i].name);

        printf("Student %d's age: ", i+1);
        scanf("%d", &s[i].age);

        printf("Student %d's score: ", i+1);
        scanf("%f", &s[i].score);
        
        printf("\n");
    }
    
    printf("Student 1 name is \"%s\", age %d.\n", s[0].name, s[0].age);
    printf("Student 2 name is \"%s\", age %d.\n", s[1].name, s[1].age);
    printf("Student 3 name is \"%s\", age %d.\n", s[2].name, s[2].age);
    return 0;
}