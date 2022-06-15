#include <stdio.h>

int main()
{
    int num,r,sum=0;

    printf("Input a number: ");
    scanf("%d",&num);

    for(int t=num;num>0;num=num/10)
	{
         r=num % 10;
         sum=sum*10+r;
    }
printf("The number in reverse order is : %d \n",sum);
}

