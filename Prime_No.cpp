#include <stdio.h>

int main()
{
    int st_no,en_no;

    printf("Enter starting number of range: ");
    scanf("%d",&st_no);

    printf("Enter ending number of range : ");
    scanf("%d",&en_no);
    printf("The prime numbers between %d and %d are : \n",st_no,en_no);
  int num;
    for(num=st_no;num<=en_no;num++)
       {
        
int index=0;
         for(int i=2;i<=num/2;i++)
            {
             if(num%i==0)
			 {
                 index++;
                 break;
             }
        }
        
         if(index==0 && num!= 1)
             printf("%d ",num);
    }
    printf("\n");
    return 0;
}
