/*
Name:Scholastica
RegNo:PA106/28808/25
Description:Program to display students examination result
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int reg_no;
    float total_marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb"); // Open binary file for reading
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Name\t\tReg No\tMarks\n");
    printf("---------------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("%s\t\t%d\t%.2f\n", s.name, s.reg_no, s.total_marks);
    }

    fclose(fp);
    return 0;
}