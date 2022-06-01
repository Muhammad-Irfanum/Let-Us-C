#include <stdio.h>

int main()
{
int num,temp1,temp2,index=0;
printf("input the number:\n");
scanf("%d",&num);

int i=2,j;
while(i<=num/2)
{
temp1=i;
temp2=num-i;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
index++;
break;
}
}
if(index==0)
{
	for(j=2;j<=(num-i)/2;j++)
	{
	if((num-i)%j==0)
{
index++;
break;}
}
if(index==0) 
printf("%d can be written as %d + %d.\n ",num,i,num-i);
}
index=0;
i++;
}
return 0;
}

