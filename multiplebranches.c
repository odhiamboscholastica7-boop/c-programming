/*
Name:Scholastica
RegNo:PA106/G/28808/25
Description:Program to display hotel multiple branches
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10]; // 3 branches, 5 floors, 10 rooms per floor
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(0)); // Initialize random generator

    // Assign random occupancy (0 or 1)
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
            }
        }
    }

    // Calculate total number of occupied rooms
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("\nHOTEL CHAIN OCCUPANCY REPORT\n");
    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}
