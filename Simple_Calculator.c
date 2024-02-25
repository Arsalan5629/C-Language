# A simple calculator to calculate the arithmetic operations between the two numbers.
#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    printf("Enter number 1: ");
    scanf("%f", &num1);

    // This if condition will check if number 1 is negative.
    if (num1 < 0) {
        printf("Informative error\n");
        // If the number is invalid, the code will finish and show the message.
        return -1;
    }

    printf("Enter number 2: ");
    scanf("%f", &num2);

    // This if condition will check if number 2 is negative.
    if (num2 < 0) {
        printf("Informative error\n");
        return -1;
    }

    printf("Enter operator: ");
    scanf(" %c", &op);

    if (op == '+') {
        printf("The sum of %.1f and %.1f will be = %.1f\n", num1, num2, num1 + num2);
    } else if (op == '-') {
        printf("The difference of %.1f and %.1f will be = %.1f\n", num1, num2, num1 - num2);
    } else if (op == '*') {
        printf("The product of %.1f and %.1f will be = %.1f\n", num1, num2, num1 * num2);
    } else if (op == '/') {
        // Check if the second number is zero to avoid division by zero.
        if (num2 == 0) {
            printf("Error: Division by zero is not allowed\n");
            return -1;
        }
        printf("The division of %.1f and %.1f will be = %.1f\n", num1, num2, num1 / num2);
    } else {
        // If the operator is invalid, finish the code and show the message.
        printf("Informative error\n");
        return -1;
    }

    return 0;
}
