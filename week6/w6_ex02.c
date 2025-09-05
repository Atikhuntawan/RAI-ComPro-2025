#include <stdio.h>

int main() {
    float max = 0;
    int n = 0;
    
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
    
    if (s[1].score > s[2].score && s[1].score > s[3].score){
        max = s[1].score;
        n = 1;
    }
    else if (s[2].score > s[1].score && s[2].score > s[3].score){
        max = s[2].score;
        n = 2;
    }
    else {
        max = s[3].score;
        n = 3;
    }
    
    printf("The highest scores belongs to %s at %.2f scores!\n",s[n].name,max);
    return 0;
}