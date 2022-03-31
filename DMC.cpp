#include<stdio.h>
int main()
{
	char name[20],fatherName[20],grade;
	int eng,urdu,maths,phy,chem,pakstudy,rollNum;
	int teng,turdu,tmaths,tphy,tchem,tpakstudy,total;
	float per,sum;
	
	printf("Enter student Name :");
	gets(name);
	printf("Enter father Name :");
	gets(fatherName);
	
	printf("Enter Roll No. :");
	scanf("%d",&rollNum);
	
	printf("Total marks in English :");
	scanf("%d",&teng);
	
	printf("Obtain English marks :");
	scanf("%d",&eng);
	
	printf("Total urdu marks :");
	scanf("%d",&turdu);
		printf("Obtain marks in Urdu :");
	scanf("%d",&urdu);
	printf("Total maths marks :");
	scanf("%d",&tmaths);
		printf("Obtain Obtain marks in Maths :");
	scanf("%d",&maths);
	printf("Total phyics marks :");
	scanf("%d",&tphy);
		printf("Obtain marks in phyics :");
	scanf("%d",&phy);
	printf("Total chemistry marks :");
	scanf("%d",&tchem);
		printf("Obtain marks in Chemistry :");
	scanf("%d",&chem);
	printf("Total pakstudy marks :");
	scanf("%d",&tpakstudy);
		printf("Obtain marks in pakstudy :");
	scanf("%d",&pakstudy);
	
	sum = eng+urdu+maths+phy+chem+pakstudy;
    total =	teng+turdu+tmaths+tphy+tchem+tpakstudy;
	per = sum/total*100;
	
	printf("\n");
	printf("\t|========================================================================|\n");
	printf("\t|												 \n");
	printf("\t|\tFEDERAL BOARD OF INTERMEDIATE AND SECONDARY EDUCATION ISLAMABAD \n");
	printf("\t|\t\tHIGHER SECONDARY SCHOOL CERTIFICATE (HSSC) EXAMINATION \n");
	printf("\t|\n");
	printf("\t|\t\t\tRESULT CARD 	      								\n");
	printf("\t|			\n");
	printf("\t|	Roll No. _____%d__________		 \n",rollNum);
	
	printf("\t| STUDENT NAME ____%s____	S/D of _____%s______ \n",name,fatherName);
	printf("\t|\n");
	printf("\t|  Subject \t\t\tTotal marks \t\t Obtain marks \t\t\t\n");
	printf("\t|  English \t\t\t %d \t\t\t\t %d \t\t\t\t\t\n",teng,eng);
	printf("\t|  Urdu    \t\t\t %d \t\t\t\t %d \t\t\t\t\t\n",turdu,urdu);
	printf("\t|  Maths   \t\t\t %d \t\t\t\t %d \t\t\t\t\t\n",tmaths,maths);
	printf("\t|  Physics \t\t\t %d \t\t\t\t %d \t\t\t\t\t\n",tphy,phy);
	printf("\t|  Chemistry\t\t\t %d \t\t\t\t %d \t\t\t\t\t\n",tchem,chem);
	printf("\t|  Pakstudy\t\t\t %d \t\t\t\t %d \t\t\t\t\t\n",tpakstudy,pakstudy);
	printf("\t|\n");
	printf("\t|  Total Obtain Marks  :%f out of %d \n",sum,total);
	
	printf("\t|  percentage of Obtain Marks :%f\n",per);
	if(per>=85)
	{
	printf("\t|  The Candidate Has Passed with Grade A\n");
	}
	else
	printf("\t|  The Candidate Has Passed with Grade B\n");
	printf("\t|===========================================================================|\n");
	
	
	
	
	return 0;
}
