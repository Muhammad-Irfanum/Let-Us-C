/*Chapter No. 1 
E.X Question (e):

				The length & breadth of a rectangle and radius of a circle are 
				input through the keyboard. Write a program to calculate the 
				area & perimeter of the rectangle, and the area & 
				circumference of the circle. */
				
#include<stdio.h>
int main()
{
float length,breadth,radius;
printf("Enter Length of a rectangle :");
scanf("%f",&length);
printf("Enter breadth of a rectangle :");
scanf("%f",&breadth);
printf("Enter Raduis of a circle :");
scanf("%f",&radius);

float area,parameter,A_circle,circumference, pie =2.14;
		area = length*breadth;
printf("\tArea of the Rectangle :%.1f\n\n",area);

		parameter = 2*(length+breadth);
printf("\tParameter of the Rectangle :%.1f\n",area);
 		A_circle = pie*radius*radius;
 		printf("======================================\n");
printf("Area of the Circle :%.1f\n\n",A_circle);
		circumference = 2*pie*radius;
printf("circumference of the Circle :%.1f",circumference);		

	}				
