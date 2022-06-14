//Write a program in C to display the n terms of odd natural number and their sum

#include <stdio.h>
int main()
{
   int num,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&num);
   printf("\nThe odd numbers are :\n");
   int i=1;
   do
   {
   	int cal = 2*i-1;
     printf("\t%d ",cal);
     sum= sum+cal;
     i++;
   }while(i<=num);
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",num,sum);
}
