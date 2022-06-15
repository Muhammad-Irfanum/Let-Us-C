#include<stdio.h>
int main()
{
	int num,str=1,i;
	printf("Enter Num Of Rows :");
	scanf("%d",&num);
	
	
	for(int r=1;r<=num;r++)
	{
		for(int c=1;c<=str;c++)
		{
			
		
			printf("%c",c+64);
			
		}
		printf("\n");
		
		str++;
	}
	
	return 0;
}
