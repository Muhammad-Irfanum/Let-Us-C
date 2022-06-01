#include<stdio.h>
int main()
{
	int num,str=1,i;
	printf("Enter Num Of Rows :");
	scanf("%d",&num);
	
	int r=1;
	while(r<=num)
	{
		int c=1;
		
		while(c<=str)
		{
			
		
			printf("%c",c+64);
			c++;
		}
		printf("\n");
		
		++str;
		r++;
	}
	
	return 0;
}
