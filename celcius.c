/*
Name:Scholastica
RegNo;PA106/G/28808/25
Description:Program to display conversion to celcius

#include <stdio.h>

/*
 * convertToCelsius
 * Converts temperature from Fahrenheit to Celsius using:
 *    C = (F - 32) * 5/9
 * Returns the Celsius value as a double.
 */
double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main(void) {
    double f;
    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%lf", &f) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    double c = convertToCelsius(f);
    printf("%.2f F = %.2f C\n", f, c);
    return 0;
}
