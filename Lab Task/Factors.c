#include<stdio.h>

void factors() {
    int num, i;
    printf("\nEnter number ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
       
    }
     printf("\n\n");
}

int main() {
    factors();
    return 0; 
}
