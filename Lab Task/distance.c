#include<stdio.h>
#include<math.h>

float function(); // Function declaration

float x1, x2, y1, y2; // Changed variable names for clarity

float function() {
    // Function to calculate and display the distance between two points
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f%f", &x1, &y1);

    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f%f", &x2, &y2);

    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("The distance between the points is: %.2f\n", distance);

    return distance; // Return the distance for potential use in the future
}

int main() {
    // Function call
    function();
    return 0;
}
