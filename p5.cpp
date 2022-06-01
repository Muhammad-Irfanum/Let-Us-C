#include<stdio.h>
int main()
{
	int row,index=0;
	int alph=65;
	printf("Enter numb of Rows :");
	scanf("%d",&row);
	
	int r=1;
	while(r<=row)
	{
		
		printf("\t");
		
		int c=1;
		while(c<=row)
		{
		printf("%c",alph);
		c++;
		}
	
		printf("\n");
		index++;
		alph++;		
	r++;
	}
	
	return 0;
}
