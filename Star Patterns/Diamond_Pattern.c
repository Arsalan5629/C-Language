#include <stdio.h>

void printDiamond() {
    int n;

    // Input: Number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop for the upper half of the diamond
    for (int i = 0; i <= n; i++) {
        // Loop for spaces
        for (int spc = 0; spc < n - i; spc++) {
            printf(" ");
        }

        // Loop for printing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }

        printf("\n");
    }

    // Loop for the lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Loop for spaces
        for (int spc = 0; spc < n - i; spc++) {
            printf(" ");
        }

        // Loop for printing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }

        printf("\n");
    }
}

int main() {
    printDiamond(); // Function call
    return 0;
}

