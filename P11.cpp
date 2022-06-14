#include<stdio.h>
int main()
{
	int num,str=1,space=num;
	printf("Enter numb Of Rows :");
	scanf("%d",&num);
	
	int r=num;
	do
	{
		int s=1;
		while(s<=str)
		{
			printf(" ");
			s++;
		}
		 int c=num;
		while(c<=(r*2-1))
		{
		
			printf("%c",66);
			c++;
		}
		printf("\n");
		str++;		
	r--;
	}while(r>=1);
	return 0;
}
