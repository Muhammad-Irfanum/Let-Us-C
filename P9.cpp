#include<stdio.h> 
int main()
{
    int num,str=num,space=1;
    printf("Enter No Row:");
    scanf("%d",&num);
    
    int r=num;
    do
    {
    	
    	int s=1;
    	do
    	{
    		printf(" ");
    		s++;
		}while(s<=space);
		
		int c=1;
        do
        {
            printf("%c",c+64);
        c++;
		}while(c<=(r*1));
        printf("\n");
        str--;
        space++;
    	r--;
	}while(r>=1);
	return 0;
}
