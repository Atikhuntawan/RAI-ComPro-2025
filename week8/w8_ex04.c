#include <stdio.h>

int count_vowels(char *s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
            ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
            count++;
        }
    }
    return count;
}

int main() {
    char word[256];

    printf("Input: ");
    scanf("%[^\n]", word);

    printf("Output: Number of vowels: %d\n", count_vowels(word));
    return 0;
}