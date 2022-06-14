#include <stdio.h> 
int main()
{
    int num;
    printf("Enter Num Of Rows");
    scanf("%d",&num);
    int r=num;
    do
    {
    	int c=r;
        do
        {
        int	sum= 65-1 +c;
            printf("%c",sum);
            c--;
        }while(c>=1);
        printf("\n");
        r--;
    }while(r>=1);
   return 0;
}
