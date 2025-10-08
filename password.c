/*
Name:Scholastica
RegNo:PA106/G/28808/25
Description:Program to display correct password
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%19s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");
    return 0;
}