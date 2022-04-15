/*(m) 
		If a five-digit number is input through the keyboard, write a 
		program to print a new number by adding one to each of its 
		digits. For example if the number that is input is 12391 then 
		the output should be displayed as 23402. */
		
#include<stdio.h>
int main()
{
	int num,n1,n2,n3,n4,n5;
	printf("Enter Any 5 number :");
	scanf("%d",&num);
	
	n1= (num +1)%10;
	
	num= num/10;
	n2=(num +1)%10;
	num= num/10;
	n3= (num +1)%10;
	num= num/10;
	n4= (num +1)%10;
	num= num/10;
	n5= (num +1)%10;
	num= num/10;
	
	printf("%d %d %d %d %d ",n5,n4,n3,n2,n1);
	return 0;	
}		
