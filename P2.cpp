#include<stdio.h> 
int main()
{
    int num,str=num;
    printf("Enter No Row:");
    scanf("%d",&num);
    int r=num;
    do
    {
    	int c=1;
        do
        {
            printf("%c",c+64);
            c++;
        }while(c<=(r*1));
        printf("\n");
        str--;
        r--;
    }while(r>=1);
}
