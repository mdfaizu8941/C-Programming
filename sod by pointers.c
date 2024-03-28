 
#include <stdio.h>
void sod(int*,int);
int main()
{ int a[100],n;
printf("input n");
scanf("%d",&n);
  sod(a,n);

    return 0;
}
void sod(int*p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++){
     int   sum=0;
    while(*(p+i)!=0)
    {  
        sum+=*(p+i)%10;
       *(p+i)=  *(p+i)/10;
         
    }
        
        printf("%d ",sum);}
}
