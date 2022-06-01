#include <stdio.h> 
int main()
{
    int num;
    printf("Enter Num Of Rows");
    scanf("%d",&num);
    int r=num;
    while(r>=1)
    {
    	int c=r;
        while(c>=1)
        {
        int	sum= 65-1 +c;
            printf("%c",sum);
            c--;
        }
        printf("\n");
        r--;
    }
   return 0;
}
