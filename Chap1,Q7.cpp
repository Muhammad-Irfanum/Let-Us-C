/*chapter No. 1:
	exercise Question No (g):
		 	If a five-digit number is input through the keyboard, write a 
			program to calculate the sum of its digits. 
			(Hint: Use the modulus operator ‘%’) */
			
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
	
	sum= firstd+secondd+thirdd+forthd+fifthd;
	
	printf("%d	 %d	 %d	 %d	 %d \n",fifthd,forthd,thirdd,secondd,firstd);
	
	printf("sum is %d",sum);
	return 0;
			}			
