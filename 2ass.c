 /* Write an algorithm to input n numbers in a file and copy reverse of all even numbers in
another file*/
#include <stdio.h>
int main()
{
    FILE *fp,*f;
    int n,i,res,num,c=0;
    printf("inpu a numer limit: ");
    scanf("%d",&n);
    fp=fopen("Data.txt","w");
    printf("input a numners: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        fprintf(fp,"%d ",num);
    }
    fclose(fp);
    fp=fopen("Data.txt","r");
    f=fopen("even.tx","w");
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d",&num);
        
          res=0;
        if(num%2==0)
        {
             while(num!=0)
        {
            int rev=num%10;
            res=res*10+rev; 
            num=num/10;
            
        }
         fprintf(f,"%d ",res);
        printf("%d ",res);
        }
        
    }
    fclose(fp);
        fclose(f);
    

    return 0;
}
