/*
Name:Scholastica
RegNo:PA106/G/28808
Description: program to display hotel room occupancy
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int occupancy[5][10];
	int floor, room;
	int occupied, vacant;
	srand(time(0));
	for(floor = 0; floor<5; floor++)
	{
		for (room =0; room<10; room++ )
		{
			if (occupancy[floor][room] ==1)
				occupied++;
			else
			
				vacant ++;
			}
			printf("floor %d:occcupied =  %d,vacant = %d \n",floor + 1,occupied,vacant);
		}
		return 0;
	}
