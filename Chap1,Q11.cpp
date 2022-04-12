//chapter 1
//Exercise solution No.k
		/*A cashier has currency notes of denominations 10, 50 and 
		100. If the amount to be withdrawn is input through the 
		keyboard in hundreds, find the total number of currency notes 
		of each denomination the cashier will have to give to the 
		withdrawer.*/

#include<stdio.h>
int main()
{
	int amount,ten,fifty,hundred;
	printf("Enter Amount in Hundreds :");
	scanf("%d",&amount);
	
	ten= amount/10;
	printf("currency notes of denominations in 10: %d\n",ten);
	fifty= amount/50;
	printf("currency notes of denominations in 50: %d\n",fifty);
	hundred= amount/100;
	printf("currency notes of denominations in 100: %d",hundred);
	
	
return 0;	
}		
