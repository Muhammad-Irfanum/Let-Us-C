#include<stdio.h>
int main()
{
	int row,index=0;
	int alph=65;
	printf("Enter numb of Rows :");
	scanf("%d",&row);
	
	int r=1;
	do
	{
		
		printf("\t");
		
		int c=1;
		do
		{
		printf("%c",alph);
		c++;
		}while(c<=row);
	
		printf("\n");
		index++;
		alph++;		
	r++;
	}while(r<=row);
	
	return 0;
}
