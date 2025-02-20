 #include <stdio.h>
void qs(int a[],int l,int r)
{
    if(l<r)
    {
        int pivot=div(a,l,r);
        qs(a,l,pivot-1);
        qs(a,pivot+1,r);
    }
}
int div(int a[],int l,int r)
{
    int pivot=a[r];
    int i=l-1;
    for(int j=l,j<r-1;j++)
    {
        if(a[j])
    }
    
}
int main(){
 int a[100],n;
 printf("Input limit:\n");
 scanf("%d",&n);
 printf("Input elememts:\n");
 for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
 qs(arr,0,n);
 for(int i=0;i<n;i++)
  printf("%d ",a[i]);
  return 0;

}
