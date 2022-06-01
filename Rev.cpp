#include <stdio.h>

int main()
{
    int num,r,sum=0;

    printf("Input a number: ");
    scanf("%d",&num);

int t=num;
    while(num>0)
	{
         r=num % 10;
         sum=sum*10+r;
         num=num/10;
    }
printf("The number in reverse order is : %d \n",sum);
return 0;
}

