#include <stdio.h>

void printPattern() {
    int n;
    char sym;

    // Input: Number of rows and symbol
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Enter the symbol to print: ");
    scanf(" %c", &sym);

    // Loop for each row
    for (int i = 0; i < n; i++) {
        // Loop for spaces
        for (int spc = 1; spc < n - i; spc++) {
            printf(" ");
        }

        // Loop for printing symbols
        for (int j = 1; j <= 2 * i + 1; j++) {
            printf("%c", sym);
        }

        printf("\n");
    }
}

int main() {
    printPattern(); // Function call
    return 0;
}
