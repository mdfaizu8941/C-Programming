  /*
  NAME                     : MOHAMMAD FAIZ
 SECTION                : F
 CLASS ROLL NO. : 44 

 .*Write a program to read 20 integers in a file. Separate them into two different files prime.txt
and nonprime.txt such that all prime numbers are copied in prime.txt and remaining numbers in
nonprime.txt.*/
#include<stdio.h>
int main()
{
    int i,num,j,prime=0,nonprime=0,c;
    FILE *fo,*fp,*fnp;
    fo=fopen("Hi.txt","w");
    if(fo==NULL) printf("\nFile Error");
    else
    {
     printf("Input an elements:");
        for(i=1;i<=20;i++)
        {
            scanf("%d",&num);
            putw(num,fo);
        }
         fclose(fo);
    }
    
       fo=fopen("Hi.txt","r");  
       fp=fopen("prime.txt","w");
        fnp=fopen("nonprime.txt","w");
        if(fo!=NULL&&fp!=NULL&&fnp!=NULL)
        {
            for(i=1;i<=20;i++)
            { c=0;
                num=getw(fo);
                for(j=2;j<num/2;j++)
                {
                    if(num%j==0)
                    {
                        c++;
                    }
                }
                if(c==0)
                {
                    putw(num,fp);
                    prime++;
                }
                else
                {
                    putw(num,fnp);
                    nonprime++;
                }
            }
            fclose(fo);
            fclose(fp);
            fclose(fnp);
             
        }
        else printf("\nfile Error");
        
          fp=fopen("prime.txt","r");
          if(fp==NULL) printf("\nFile Error");
          else
          {
              for(i=1;i<=prime;i++)
              {
                  num=getw(fp);
                  printf("%d",num);
             }
               fclose(fp);
          }
         
            fnp=fopen("prime.txt","r");
          if(fnp==NULL) printf("\nFile Error");
          else
          {
              for(i=1;i<=nonprime;i++)
              {
                  num=getw(fnp);
                  printf("%d",num);
             }
              fclose(fnp);
          }
          
    return 0;
}
