#include <stdio.h>
int main()
{
    int num,r,sum=0,temp;

    printf("Input  a number: ");
    scanf("%d",&num);
  temp=num;
    do
	{
	
         r=num%10;
         sum=sum+(r*r*r);
         num=num/10;    
    }while( num>0);
    
    if(temp==sum)
         printf("%d is an Armstrong number :\n",temp);
    else
         printf("%d is not an Armstrong number :\n",temp);
         return 0;

}
