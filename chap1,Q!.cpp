/* Question No1
		Ramesh’s basic salary is input through the keyboard. His 
		dearness allowance is 40% of basic salary, and house rent 
		allowance is 20% of basic salary. Write a program to calculate 
		his gross salary. */


#include<stdio.h>
int main()
{
	int BS, DA, HRA, GS;
	printf("Enter Basic Salary :");
	scanf("%d",&BS);
	
	DA =BS*40/100;
	printf("Dearness Allowance :%d\n",DA);
	
	HRA =BS*20/100;
	printf("House Rent Allowance :%d\n",HRA);
	
	GS = BS+DA+HRA;
	printf("Your Gross Salary is :%d\n",GS);
	
	
	
	return 0;
}
