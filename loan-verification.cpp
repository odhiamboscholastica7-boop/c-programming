/*
Name:Scholastica
RegNo:PA106/G/28808/25
Description:Program to display loan verification
*/

#include <stdio.h>

int main()
{
	int age;
	double annual_income;

	// Prompt user for age
	printf("Enter your age: ");
	scanf("%d", &age);

	// Prompt user for annual income
	printf("Enter your annual income: ");
	scanf("%lf", &annual_income);

	// Check eligibility
	if (age >= 21 && annual_income >= 21000)
	{
		printf("\nCongratulations! You qualify for a loan.\n");
	}
	else
	{
		printf("\nUnfortunately, we are unable to offer you a loan at this time.\n");
	}
	return 0;
}
