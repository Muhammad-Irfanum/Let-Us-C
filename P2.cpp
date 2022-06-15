#include<stdio.h> 
int main()
{
    int num,str=num;
    printf("Enter No Row:");
    scanf("%d",&num);
    
    for(int r=num;r>=1;r--)
    {
        for(int c=1;c<=(r*1);c++)
        {
            printf("%c",c+64);
        }
        printf("\n");
        str--;
    }
}
