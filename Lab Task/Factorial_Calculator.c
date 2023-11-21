#include<stdio.h>

void factorial() {
    int x, fact = 1, num; // variable declaration
    printf("Enter a number for calculating factorial: "); // Corrected prompt
    scanf("%d", &num);

    for (x = 1; x <= num; x++) {
        fact *= x; // fact = fact * x
    }

    printf("The factorial will be %d\n", fact); // Corrected printf statement
}

int main() {
    factorial(); // function call
    return 0;
}
