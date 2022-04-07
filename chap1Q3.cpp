/* chapter 1:
Exercise Question: (c) 
						If the marks obtained by a student in five different subjects 
						are input through the keyboard, find out the aggregate marks 
						and percentage marks obtained by the student. Assume that 
						the maximum marks that can be obtained by a student in each 
						subject is 100. */
						
#include<stdio.h>
int main()
{
	
	int   english,urdu,maths,chem,bio,total =500;
	float sum,per,aggregate;
	
	printf("Enter your English marks :");
	scanf("%d",&english);
	printf("Enter your Urdu marks :");
	scanf("%d",&urdu);
	printf("Enter your Mathematics marks :");
	scanf("%d",&maths);
	printf("Enter your Chemistry marks :");
	scanf("%d",&chem);
	printf("Enter your Biology marks :");
	scanf("%d",&bio);
	
	sum= english+urdu+maths+chem+bio;
	
	per= (sum/total)*100;
	printf("\tpercentage of total marks :%.1f\n\n",per);
	
	aggregate = english+urdu+maths+chem+bio;
	printf("\tThe Aggregate marks of subjects is :%.0f ",aggregate);
	
	return 0;
}
