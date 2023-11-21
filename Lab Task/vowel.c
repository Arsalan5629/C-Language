#include <stdio.h>

int main() {
    char a;

    printf("Enter character: ");
    scanf(" %c", &a);

    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        if (a == 'a' || a == 'A') {
            printf("Vowel\n");
        } else if (a == 'e' || a == 'E') {
            printf("Vowel\n");
        } else if (a == 'i' || a == 'I') {
            printf("Vowel\n");
        } else if (a == 'o' || a == 'O') {
            printf("Vowel\n");
        } else if (a == 'u' || a == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Invalid\n");
    }

    return 0;
}
