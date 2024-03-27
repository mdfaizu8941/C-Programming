 #include<stdio.h>
void lowerTri(int [][5],int,int);
int main()
{
    int arr[5][5],i,j,r,c;
    printf("\nInput the number of rows and column : ");
    scanf("%d%d",&r,&c);
    printf("\nInput elements of a matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    lowerTri(arr,r,c);
    return 0;
}
void lowerTri(int arr[][5],int r, int c)
{   int i,j,sum=0;
   printf("\nThe given matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe elements being summed of the lower triangular matrix are:");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {   if(i>j)
            {
               printf("%d ",arr[i][j]); 
               sum=sum+arr[i][j];
            }
        }
    }
    printf("\nThe sum of lower triangular of matrix is %d:" ,sum);
  
    

    
}
