 
#include <stdio.h>
 void swap(int*,int);
int main()
{ int n;
int arr[200];


 printf("Input a num");
 scanf("%d",&n);
 swap(arr,n);
}
void swap(int *p,int n)
{ int k,temp,i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }

 
    for(i=0,j=1;i<n-1;i=i+2,j=j+2)
 {
          
             temp=*(p+i);
             *(p+i)=*(p+j);
             *(p+j)=temp;
         }
     
 
 for(i=0;i<n;i++)
 {
     printf("%d ",*(p+i));
 }
}