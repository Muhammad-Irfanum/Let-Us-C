#include<stdio.h>
int main()
{
	int num,str=1,space=num;
	printf("Enter Num of Rows :");
	scanf("%d",&num);
	
	int r=1;
	while(r<=num)
	{
		
		int s=1;
		while(s<=space)
		{
			printf(" ");
		s++;
		}
		
		int c=1;
			while(c<=str)
			{
				printf("%c",c+64);
				c++;
			}
			
		
		printf("\n");
		space--;
		str++;
		r++;
	}
	
	return 0;
}
