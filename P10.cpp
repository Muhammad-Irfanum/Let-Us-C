#include<stdio.h>
int main()
{
	int num,str=num,space=6;
	printf("Enter numb Of Rows :");
	scanf("%d",&num);
	int r=1;
	do
	{
		int s=1;
		do
		{
			printf(" ");
		s++;
		}while(s<=space);
		
		int c=1;
		do
		{
			printf("%c",c+64);
		c++;
		}while(c<=(r*2-1));
		printf("\n");
		str--;
		space--;
	r++;
	}while(r<=num);
	return 0;
}
