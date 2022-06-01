#include<stdio.h> 
int main()
{
    int num,str=num,space=1;
    printf("Enter No Row:");
    scanf("%d",&num);
    
    int r=num;
    while(r>=1)
    {
    	
    	int s=1;
    	while(s<=space)
    	{
    		printf(" ");
    		s++;
		}
		
		int c=1;
        while(c<=(r*1))
        {
            printf("%c",c+64);
        c++;
		}
        printf("\n");
        str--;
        space++;
    	r--;
	}
	return 0;
}
