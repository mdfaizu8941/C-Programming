 #include <stdio.h>
 void largEle(int [][100],int,int);
 int main()
{ int arr[100][100];
int i,j,row,col;
printf("\nINPUT\t\n");
printf("input a number of rows an columns\n");
scanf("%d%d",&row,&col);
printf("\nEnter the elements of a matrix\n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}
largEle( arr, row,col);
    return 0;
}
void largEle(int arr[][100],int row,int col)
{
    int i,j;
    printf("\nOUTPUT\t\n");
    printf("The given matrix is\n ");
    for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
printf("\n");
    for(i=0;i<row;i++)
    {  int maxElement=0;
        for(j=0;j<col;j++)
        {
            if(maxElement<arr[i][j])
            {
                maxElement=arr[i][j];
            }
        }
        printf("The biggest elment of row %d is %d\n",i+1,maxElement);
    }
}