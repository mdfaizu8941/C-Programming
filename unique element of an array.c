//wap tp print uniqe elements of an array:
#include<stdio.h>
void uniqueEle(int[],int);
int main()
{
    int arr[100],n,i;
    printf("Input a limit of an array:\n ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    { printf("element %d: ",i+1);
        scanf(" %d", &arr[i]);
    }
    uniqueEle(arr,n);
    return 0;
 }
 void uniqueEle(int arr[],int n)
 {  int j,i;
   printf("Unique elements found in array are: ");
     for(i=0;i<n;i++)
     {
         int f=0;
         for(j=i+1;j<n;j++)
         {
             if(arr[i]==arr[j])
             {
             arr[j]='\0';
              f=f+1;
             } 
        }
          if(f==0 && arr[i]!=0)
              {
                  printf("%d ",arr[i]);
              }
             
       
         
     }
 }
 

