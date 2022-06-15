#include<stdio.h>
int main()
{
	int num,str=1,space=num;
	printf("Enter numb Of Rows :");
	scanf("%d",&num);
	
	for(int r=num;r>=1;r--)
	{
		for(int s=1;s<=str;s++)
		{
			printf(" ");
		}
		for( int c=num;c<=(r*2-1);c++)
		{
		
			printf("%c",66);
		}
		printf("\n");
		str++;		
	}
	return 0;
}
