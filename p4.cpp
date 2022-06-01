#include<stdio.h>
int main()
{
	int num,str=1;
	printf("Enter Num of Rows :");
	scanf("%d",&num);
	
	int r=1;
	while(r<=num)
	{
		int c=1;
		while(c<=str)
		{
		int	sum=str+64;
			printf("%c",sum);
		c++;
		}
		printf("\n");
			str++;
			r++;
	}
	return 0;
}
