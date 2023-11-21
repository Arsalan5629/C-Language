#include<stdio.h>

void pattern() {
    // Function to print a specific pattern
    for (int i = 5; i >= 1; i--) { // Row loop
        for (int spc = 1; spc <= 5 - i; spc++) { // Space loop
            printf(" ");
        }
        for (int col = 1; col <= 2 * i; col++) { // Column loop
            printf("%d", i);
        }
        printf("\n");
    }
}

int main() {
    pattern(); // Function call
    return 0; // Indicate successful execution
}
