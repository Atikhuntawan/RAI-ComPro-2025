#include <stdio.h>

int main() {
    char name[100];
    float cal_score;
    float phy_score;
    float sci_score;
    float avg;

    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your Calculus score: ");
    scanf("%f",&cal_score);    
    printf("Enter your Physic score: ");
    scanf("%f",&phy_score);
    printf("Enter your Science score: ");
    scanf("%f",&sci_score);
    
    avg = (cal_score + phy_score + sci_score)/3;
    
    if (avg < 50){
        printf("%s, your average is %.2f. You got grade F.",name,avg);
    }
    else if (avg >= 50 && avg < 60){
        printf("%s, your average is %.2f. You got grade D.",name,avg);
    }
    else if (avg >= 60 && avg < 70){
        printf("%s, your average is %.2f. You got grade C.",name,avg);
    }
    else if (avg >= 70 && avg < 80){
        printf("%s, your average is %.2f. You got grade B.",name,avg);
    }
    else {
        printf("%s, your average is %.2f. You got grade A.",name,avg);    
    }
    return 0;
}