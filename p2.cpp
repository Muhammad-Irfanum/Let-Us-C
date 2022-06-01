#include<stdio.h> 
int main()
{
    int num,str=num;
    printf("Enter No Row:");
    scanf("%d",&num);
    int r=num;
    while(r>=1)
    {
    	int c=1;
        while(c<=(r*1))
        {
            printf("%c",c+64);
            c++;
        }
        printf("\n");
        str--;
        r--;
    }
}
