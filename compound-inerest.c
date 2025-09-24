/*
Name:Scholastica
RegNo:PA106/G/28808/25
Description:Program to display compound interest
A=P(1+r/n)^n*t
*/

#include <stdio.h>
#include <math.h>

int main() {
	double principal, rate, time, n, amount;

	// Input principal, rate, time, and number of times interest applied per year
	printf("Enter principal amount (P): ");
	scanf("%lf", &principal);

	printf("Enter annual interest rate (r) in decimal (e.g., 0.05 for 5%%): ");
	scanf("%lf", &rate);

	printf("Enter time in years (t): ");
	scanf("%lf", &time);

	printf("Enter number of times interest applied per year (n): ");
	scanf("%lf", &n);

	// Compound interest formula: A = P(1 + r/n)^(nt)
	amount = principal * pow(1 + rate/n, n*time);

	printf("\nCompound Interest Amount (A): %.2lf\n", amount);
	return 0;
}
