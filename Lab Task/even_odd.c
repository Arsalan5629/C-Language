#include<stdio.h>

int function(); // Function declaration

int num; // Global variable

int function() {
    printf("Enter a number to check if it's even or odd: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0; // Added return statement to match the declared return type
}

int main(void) {
    function(); // Function call
    function();
    return 0;
}
