 /*
 NAME           : MOHAMMAD FAIZ
 SECTION        : F
 CLASS ROLL NO. : 44 
Q8:Write a Program to input an array and reverse the array elements from particular index to the
last using dynamic memory allocation */
 
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     int n,i,j,*p,start,temp;
     printf("\t\t\t\t\tINPUT\t\n");
      printf("Input a number of elements:\n");
     scanf("%d",&n);
     p=(int*)malloc(n*sizeof(int));
     printf("Enter an elements of an array:\n");
     for(i=0;i<n;i++)
     {
         scanf("%d",(p+i));
     }
     printf("Input a particular index to be reversed:\n");
     scanf("%d",&start);
     for(i=start,j=n-1;i<j;i++,j--)
     {
         temp=*(p+i);
         *(p+i)=*(p+j);
         *(p+j)=temp;
     }
     printf("\t\t\t\t\tOUTPUT\t\n");
     printf("Revered array by a particular index:\n");
     for(i=0;i<n;i++)
     {
         printf("%d ",*(p+i));
     }
     return 0;
     
 }
