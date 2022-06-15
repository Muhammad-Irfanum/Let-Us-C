#include <stdio.h> 
int main()
{
    int num;
    printf("Enter Num Of Rows");
    scanf("%d",&num);
    
    for(int r=num;r>=1;r--)
    {
        for(int c=r;c>=1;c--)
        {
        int	sum= 65-1 +c;
            printf("%c",sum);
        }
        printf("\n");
    }
   return 0;
}
