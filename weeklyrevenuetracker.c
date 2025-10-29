/*
Name:Scholastica
RegNo:PA106/G/28808/25
Description:Program to display hotel weekly revenue tracker
*/
#include <stdio.h>


int main(){
	float revenue[7];
	float total=0,average;
	int i;
	
	printf("Enter the revenue for each of the 7 days:\n");
	for (i = 0; i < 7; i++){
		printf("Day %d:", i+1);
		scanf("%f",& revenue[i]);
		total += revenue[i];
	}
	average = total / 7;
	
	printf("\nTotal weekly Revenue:%.2f\n",total);
	printf("Average Daily Revenue:%.2f\n",average);
	
	return 0;
}