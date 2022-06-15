#include<stdio.h>
int main()
{
	int num,str=1;
	printf("Enter Any Numb :");
	scanf("%d",&num);
	
	for(int r=1;r<=num;r++)
	{
		for(int c=1;c<=str;c++)
		{
			printf("%c",c+76);
		}
		printf("\n");
		str++;
	}
	
	return 0;
}
