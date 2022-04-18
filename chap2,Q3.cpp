/*	(c)
		Any year is input through the keyboard. Write a program to 
		determine whether the year is a leap year or not. 
		(Hint: Use the % (modulus) operator) */

#include<stdio.h>
int main()
{
	int year;
	printf("Enter year :");
	scanf("%d",&year);
	printf("\n=========================\n");
	if(year%4==0)
	{
		printf("This is Leap Year");
	
	}
	else
	printf("This is not leap year");
	printf("\n=========================\n");
	return 0;
	
		}		
