#include<stdio.h>
int main()
{
	int num,str=num,space=6;
	printf("Enter numb Of Rows :");
	scanf("%d",&num);
	int r=1;
	while(r<=num)
	{
		int s=1;
		while(s<=space)
		{
			printf(" ");
		s++;
		}
		
		int c=1;
		while(c<=(r*2-1))
		{
			printf("%c",c+64);
		c++;
		}
		printf("\n");
		str--;
		space--;
	r++;
	}
	return 0;
}
