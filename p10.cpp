#include<stdio.h>
int main()
{
	int num,str=num,space=6;
	printf("Enter numb Of Rows :");
	scanf("%d",&num);
	
	for(int r=1;r<=num;r++)
	{
		for(int s=1;s<=space;s++)
		{
			printf(" ");
		}
		for( int c=1;c<=(r*2-1);c++)
		{
			printf("%c",c+64);
		}
		printf("\n");
		str--;
		space--;
	}
	return 0;
}
