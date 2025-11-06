/*
Name:Scholaastica
RegNo:PA106/G/28808/25
Description:
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    float amount, total = 0.0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(fp);

    printf("Total sales for the day: %.2f\n", total);
    return 0;
}