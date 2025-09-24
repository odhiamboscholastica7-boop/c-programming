#include <stdio.h>

int main() {
    float height, bank_balance;
    int id_no;

    printf("Enter your height (in inches): ");
    scanf("%f", &height);

    printf("Enter your ID number: ");
    scanf("%d", &id_no);

    printf("Enter your bank balance: ");
    scanf("%f", &bank_balance);

    printf("\n--- Details Entered ---\n");
    printf("Height: %.2f inches\n", height);
    printf("ID Number: %d\n", id_no);
    printf("Bank Balance: %.2f\n", bank_balance);

    return 0;
}