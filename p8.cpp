#include<stdio.h>
int main()
{
	int num,str=1,space=num;
	printf("Enter Num of Rows :");
	scanf("%d",&num);
	
	for(int r=1;r<=num;r++)
	{
		for(int s=1;s<=space;s++)
		{
			printf(" ");
		}
			for(int c=1;c<=str;c++)
			{
				printf("%c",c+64);
			}
			
		
		printf("\n");
		space--;
		str++;
	}
	
	return 0;
}
