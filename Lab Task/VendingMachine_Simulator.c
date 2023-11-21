#include <stdio.h>

int coke_price = 5, sprite_price = 7, up_price = 3, pepsi_price = 7;
int coke_available = 10, pepsi_available = 15, sprite_available = 15, up_available = 25;

int num, quantity, bill1, bill2, bill3, bill4;

void check_availability() {
    printf("Welcome to the vending machine!\n");
    printf("Available Drinks:\n");
    printf("1. coke (Price = $%d, Available %d)\n", coke_price, coke_available);
    printf("2. sprite (Price = $%d, Available %d)\n", sprite_price, sprite_available);
    printf("3. 7up (Price = $%d, Available %d)\n", up_price, up_available);
    printf("4. pepsi (Price = $%d, Available %d)\n", pepsi_price, pepsi_available);
}

void user_input() {
    printf("Enter the number you want to purchase (1-4): ");
    scanf("%d", &num);

    printf("Enter the quantity you want to buy: ");
    scanf("%d", &quantity);

    if (num == 1) {
        bill1 = quantity * coke_price;
        printf("\nYou have ordered %d coke(s) for a total of $%d\n", quantity, bill1);
    } else if (num == 2) {
        bill2 = quantity * sprite_price;
        printf("\nYou have ordered %d sprite(s) for a total of $%d\n", quantity, bill2);
    } else if (num == 3) {
        bill3 = quantity * up_price;
        printf("\nYou have ordered %d 7up(s) for a total of $%d\n", quantity, bill3);
    } else if (num == 4) {
        bill4 = quantity * pepsi_price;
        printf("\nYou have ordered %d pepsi(s) for a total of $%d\n", quantity, bill4);
    } else {
        printf("Invalid selection\n");
    }
}

void display_available() {
    if (num == 1) {
        printf("1. coke (Price = $%d, Available %d)\n", coke_price, coke_available - quantity);
    } else if (num == 2) {
        printf("2. sprite (Price = $%d, Available %d)\n", sprite_price, sprite_available - quantity);
    } else if (num == 3) {
        printf("3. 7up (Price = $%d, Available %d)\n", up_price, up_available - quantity);
    } else if (num == 4) {
        printf("4. pepsi (Price = $%d, Available %d)\n", pepsi_price, pepsi_available - quantity);
    } else {
        printf("Invalid selection\n");
    }
}

void calculate_bill() {
    printf("Your Total bill is $%d\n", bill1 + bill2 + bill3 + bill4);
}

int main() {
    check_availability();
    user_input();
    display_available();
    calculate_bill();
    return 0;
}
