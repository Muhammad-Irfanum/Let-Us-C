#include<stdio.h>
int main()
{
	int num,str=1;
	printf("Enter Num of Rows :");
	scanf("%d",&num);
	
	int r=1;
	do
	{
		int c=1;
		do
		{
		int	sum=str+64;
			printf("%c",sum);
		c++;
		}while(c<=str);
		printf("\n");
			str++;
			r++;
	}while(r<=num);
	return 0;
}
