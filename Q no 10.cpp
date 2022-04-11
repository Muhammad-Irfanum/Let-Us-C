/* Chapter N0.1
exercise Question (j)
	In a town, the percentage of men is 52. The percentage of 
	total literacy is 48. If total percentage of literate men is 35 of 
	the total population, write a program to find the total number of illiterate men and women 
	if the population of the town is 80,000*/
	
#include<stdio.h>
int main()
{
	int man,woman,literacy_man,literacy_woman,total_literacy,illiterate_men,illiterate_women;		//pop= population
	int pop=80000;
	man= (52*pop)/100;
	woman= pop-man;
	total_literacy= (48*pop)/100;
	literacy_man= (35*pop)/100;
	literacy_woman= total_literacy-literacy_man;
	illiterate_men= man- literacy_man;
	illiterate_women= woman- literacy_woman;
	
	printf("Total number of illiterrate men is : %d\n", illiterate_men);
	printf("Total number of illiterrate women is : %d ",illiterate_women);
return 0;	
}	
