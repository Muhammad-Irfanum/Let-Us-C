/*(2)  The distance between two cities (in km.) is input through the 
       keyboard. Write a program to convert and print this distance 
       in meters, feet, inches and centimeters. */
       
#include<stdio.h>
int main()
{
	float dis;
	printf("Enter Distance b/w Two Points in Km :");
	scanf("%f",&dis);
	
	float m = dis*1000;
	printf("\tDistance convert into meter :%.3f\n",m);

float f = dis*3280.8399;
printf("\tDistance convert into Feet :%f\n",f);

float i = dis*39370.0787;
printf("\tDistance convert into inch :%f\n",i);

	float c = dis*100000;
	printf("\tDistance convert into centimeter :%.3f\n",c);
}
