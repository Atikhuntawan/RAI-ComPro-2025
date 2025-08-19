#include <stdio.h>

int main(void) {
    char s[101], rev[101];
    if (scanf("%100s", s) != 1) return 0;

    int len = 0;
    while (s[len] != '\0') len++;

    int vowels = 0;
    for (int i = 0; i < len; i++) {
        char ch = s[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            vowels++;
        }
    }

    for (int i = 0; i < len; i++) rev[i] = s[len-1-i];
    rev[len] = '\0';

    printf("%s\n", rev);          
    printf("%d\n", vowels);      
    return 0;
}
