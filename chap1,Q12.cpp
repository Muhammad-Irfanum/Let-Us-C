/*(l) 
		If the total selling price of 15 items and the total profit earned 
		on them is input through the keyboard, write a program to 
		find the cost price of one item.*/




#include<stdio.h>
int main()
{
	float c_price,p_price,s_price;
	
	printf("Enter total selling price :");
	scanf("%f",&s_price);
	printf("Enter total profit price :");
	scanf("%f",&p_price);
	
	s_price = s_price/15;
	p_price=  p_price/15;
	
	c_price = s_price-p_price;
	printf("cost price %.2f",c_price);
	 
	return 0;
}
