    //wap to print odd and even elements of an array sepratly:
#include<stdio.h>
void oddEven(int[],int);
int main()
{
    int arr[100],n,i;
    printf("Input a limit of an array:\n ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    { printf("element %d: ",i+1);
        scanf(" %d", &arr[i]);
    }
    oddEven(arr,n);
    return 0;
 }
 void oddEven(int arr[],int n)
 {
     int i;
     printf("The even elements of an array is: ");
     for(i=0;i<n;i++)
     {
         if(arr[i]%2==0)
         {
             printf("%d ",arr[i]);
         }
     }
      printf("\nThe odd elements of an array is: ");
     for(i=0;i<n;i++)
     {
         if(arr[i]%2!=0)
         {
             printf("%d ",arr[i]);
         }
     }
 }
