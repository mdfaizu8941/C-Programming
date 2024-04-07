#include<stdio.h>
 int main()
{
    int a=90,i,n;
    printf("Guess the number :");
    
   for(i=1;i>0;i++)
   {
      scanf("%d",&n);
      if(n==a)
     { printf("\nYeh! %d you guess the right number ",n);
       break;}
       else
       printf("ops! %d is a wrong number try again:",n);
   }
    return 0;
}
