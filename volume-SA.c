/*
Name:Scholastica
RegNO:PA106/G/28808/25
Description:program to display volumme and surface-area of a cylinder
V=pir^2h
SA=2pir^2+2pirh
*/

#include<stdio.h>  //scanf(),printf()

//main function
int main (){
//variable declaration
int height = 35;//%d
int radius = 21;//%d
float pi = 3.412;//%f
float volume  ;//%f

//prompt the user to enter each variable
printf("Enter the value of the height:");
scanf("%d",height);

printf("Enter the value of radius:");
scanf("%d",radius);

printf("Enter the value of pi:");
scanf("%f",pi);

Volume = pi*radius^2*height;
Surface-area = (2*pi*radius^2+2*pi*radius*height);

printf("the height is %dcm \n",height);
printf("the radius is %dcm \n",radius);
printf("the value of pi is %f \n",pi);
return 0;

}