/*
Name:Scholastica
RegNo:PA106/G/28808/25
Description:program to display total water bills
*/
#include<stdio.h>

//main function
int main(){ 
	int units;
	float bills;
	
	//prompt the user to enter number of units consumed ;
	printf("Enter number of units consumed ;\n");
	scanf("%d",&units );
	
if(units<=30){
	bills=units * 20.0;
}	
else if(units>30 &&units>=60){
	bills=units * 25.0;
}	
else{
	bills=units	* 30.0;
}
printf(" Total bill KES %.2f\n",bills);
return 0;
}