/*
Name:Scholastica
RegNo:PA106/G/28808/25
Description:Program to display
include <stdio.h>

/*
 * calculateElectricBill
 * Returns total bill for given units consumed.
 * Rates:
 *  - First 100 units: KSh.10 per unit
 *  - Next 100 units: KSh.15 per unit
 *  - Above 200 units: KSh.20 per unit
 */
double calculateElectricBill(int units) {
    double bill = 0.0;
    if (units <= 0) return 0.0;
    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = 100 * 10.0 + (units - 100) * 15.0;
    } else {
        bill = 100 * 10.0 + 100 * 15.0 + (units - 200) * 20.0;
    }
    return bill;
}

int main(void) {
    int units;
    printf("Enter number of units consumed: ");
    if (scanf("%d", &units) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    double bill = calculateElectricBill(units);
    printf("Total bill: KSh %.2f\n", bill);
    return 0;
}
