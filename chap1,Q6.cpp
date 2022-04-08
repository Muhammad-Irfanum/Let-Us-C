	/*chapter No. 1:
	exercise Question No (f):
		(f) Two numbers are input through the keyboard into two 
		locations C and D. Write a program to interchange the 
		contents of C and D.*/
		
		
#include<stdio.h>
int main()
{
int C,D;
	printf("Enter a number :");
	scanf("%d",&C);
	printf("Enter another number :");
	scanf("%d",&D);
	
	C = D+C;
	D = C-D;
	C = C-D;
	printf("C is %d and D is %d",C,D);
	
	return 0;
		}		
