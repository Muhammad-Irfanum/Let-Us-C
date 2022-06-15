#include<stdio.h>
int main()
{
	int num,str=1;
	printf("Enter Num of Rows :");
	scanf("%d",&num);
	
	for(int r=1;r<=num;r++)
	{
		for(int c=1;c<=str;c++)
		{
		int	sum=str+64;
			printf("%c",sum);
		
		}
		printf("\n");
			str++;
	}
	return 0;
}
