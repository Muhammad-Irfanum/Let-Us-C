/*chapter No. 1:
	exercise Question No (i):
			 If a four-digit number is input through the keyboard, write a 
			program to obtain the sum of the first and last digit of this 
			number.*/

#include<stdio.h>
int main()
{
	int num,firstd,secondd,thirdd,forthd,fifthd,sum;		//firstd means first digit etc..
	
	printf("Enter Any five-Digit number :");
	scanf("%d",&num);
	
	firstd= num%10;
	num= num/10;
	
	secondd= num%10;
	num= num/10;
	
	thirdd= num%10;
	num= num/10;
	
	forthd= num%10;
	num= num/10;
	
	fifthd= num%10;
	num= num/10;
	
	sum= firstd+fifthd;
	
	printf("%d	 %d	 %d	 %d	 %d \n",fifthd,forthd,thirdd,secondd,firstd);
	
	printf("sum of First and last digit %d",sum);
	return 0;
			}			
