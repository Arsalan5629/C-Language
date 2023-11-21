#include <stdio.h>

int Prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int x = 2; x * x <= num; x++) {
        // if it is not a prime number
        if (num % x == 0) {
            return 0;
        }
    }
    // if it is a prime number
    return 1;
}

int main() {
    int num; // variable declaration
    printf("Enter a number for checking prime: ");
    scanf("%d", &num);

    if (Prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
