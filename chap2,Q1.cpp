	/*(a)	
	 	If cost price and selling price of an item is input through the 
		keyboard, write a program to determine whether the seller has 
		made profit or incurred loss. Also determine how much profit 
		he made or loss he incurred.*/
		
#include<stdio.h>
int main ()
{
	int cost, sell, loss, profit;
	printf("Enter your Cost Price :");
	scanf("%d",&cost);
	printf("Enter Your selling price :");
	scanf("%d",&sell);
	
		profit= sell - cost;
		loss= sell- cost;
	printf("\n=================================\n");
	if(sell>cost)
	
	{
		printf("You made profit.\n");
		printf("your profit is: %d:",profit);
	}
	else if(cost>sell)
	
	{
	
		printf("Oops you incurred loss\n");
		printf("your loss is: %d:",loss);
	
}

	else 
	printf("you have 0 profit and 0 loss");
printf("\n=================================\n");
	return 0;
}		
