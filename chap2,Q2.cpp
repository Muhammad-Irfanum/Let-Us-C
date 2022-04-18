/*	(b)
		Any integer is input through the keyboard. Write a program to 
		find out whether it is an odd number or even number. */

#include<stdio.h>
int main()
{
	int num;
	printf("Enter Any integer: ");
	scanf("%d",&num);
	printf("\n=============================\n");
	if(num%2==0)
	{
		printf("Given Integer is Even");
	}
	else 
	printf("Given Integer is Odd");
	
	return 0;
		}		
