/*
Name:Scholastica
RegNo:PA106/G/28808/25
Description:Program to display amount withrawn and balance
*/
#include <stdio.h>

int main() {
    double balance, withdraw;

    // Prompt user for initial balance
    printf("Enter initial account balance: ");
    scanf("%lf", &balance);

    // Withdraw as long as balance is greater than 0
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%lf", &withdraw);

        balance -= withdraw;
        printf("Balance after withdrawal: %.2lf\n", balance);
    }

    printf("Account balance is zero or negative. No more withdrawals allowed.\n");
    return 0;
}