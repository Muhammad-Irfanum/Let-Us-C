#include<stdio.h>
int main()
{
	int row,index=0;
	int alph=65;
	printf("Enter numb of Rows :");
	scanf("%d",&row);
	
	for(int r=1;r<=row;r++)
	{
		
		printf("\t");
		
		for(int c=1;c<=row;c++)
		{
		printf("%c",alph);
		}
	
		printf("\n");
		index++;
		alph++;		
	}
	return 0;
}
