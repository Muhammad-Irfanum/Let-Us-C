#include<stdio.h>
int main()
{
	int num,str=1,i;
	printf("Enter Num Of Rows :");
	scanf("%d",&num);
	
	int r=1;
	do
	{
		int c=1;
		
		do
		{
			
		
			printf("%c",c+64);
			c++;
		}while(c<=str);
		printf("\n");
		
		++str;
		r++;
	}while(r<=num);
	
	return 0;
}
