#include<stdio.h>
int main()
{
	int num,str=1,space=num;
	printf("Enter Num of Rows :");
	scanf("%d",&num);
	
	int r=1;
	do
	{
		
		int s=1;
		do
		{
			printf(" ");
		s++;
		}while(s<=space);
		
		int c=1;
			do
			{
				printf("%c",c+64);
				c++;
			}while(c<=str);
			
		
		printf("\n");
		space--;
		str++;
		r++;
	}while(r<=num);
	
	return 0;
}
