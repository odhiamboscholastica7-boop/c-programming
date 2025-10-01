/*
Name:Scholastica
RegNo:PA106/G/28808/25
Description:program to display student's eligibility for final exams
*/

#include<stdio.h>

//main function
int main(){
	int attendance;
	int marks;
	
	//prompt user to enter attendance;
	printf("Enter attendance; \n");
	scanf("%d", &attendance);
	
	//prompt user to enter marks;
	printf("Enter marks; \n");
	scanf("%d", &marks);
	
	//check eligibility;
	if(attendance>=75 &&marks>=40)
	{
		printf("\n you are eligible for final exams.\n");
	}
	else
	{
		printf("\n you are not eligible for final exams.\n");
	}
	return 0;
	
}