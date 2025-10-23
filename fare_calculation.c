/*
Name:Scholastica
RegNo:PA106/G/28808/25
Description:Program to display calculation of fare
*/
#include <stdio.h>

/*
 * calculateFare
 * Returns fare in KSh for a given distance in kilometers.
 * Rate: KSh.50 per km
 */
double calculateFare(double distance_km) {
    return distance_km * 50.0;
}

int main(void) {
    double distance;
    printf("Enter distance traveled (km): ");
    if (scanf("%lf", &distance) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    double fare = calculateFare(distance);
    printf("Total fare: KSh %.2f\n", fare);
    return 0;
}
