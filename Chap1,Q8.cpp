/*chapter No. 1:
	exercise Question No (v):
		 If a five-digit number is input through the keyboard, write a 
		program to reverse the number.*/
		
		#include<stdio.h>
int main()
{
	int num,firstd,secondd,thirdd,forthd,fifthd,rev;		//firstd means first digit etc..
	
	printf("Enter Any five-Digit number :");
	scanf("%d",&num);
	
	firstd= num%10;
		rev= 10000*firstd;
	num= num/10;
	
	secondd= num%10;
		rev= 1000*secondd + rev;
	num= num/10;
	
	thirdd= num%10;
		rev= 100*thirdd + rev;
	num= num/10;
	
	forthd= num%10;
		rev= 10*forthd + rev;
	num= num/10;
	
	fifthd= num%10;
	rev= fifthd + rev;
	num= num/10;
	
	 printf("\n");
	printf("revrse is %d \n",rev);
	return 0;
			}			
