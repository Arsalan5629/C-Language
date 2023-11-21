#include<stdio.h>
#include<math.h>

float myabsolute(); // Function declaration

float num, a;

float myabsolute() {
    printf("Enter a number: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("The absolute value of the number is %.1f\n", pow(num, 2) / -num);
    } else {
        printf("The absolute value of the number is %.1f\n", num);
    }

    return 0; // Added return statement to match the declared return type
}

int main() {
    // Function calls
    myabsolute();
    myabsolute();

    return 0;
}
