 /*Write a code to create a structure for book data with fields publisher, book name, cost
and no of copies. Store 50 records and print the count of all the books published by the
 publisher “Oxford”.*/
#include<stdio.h>
#include<string.h>
typedef struct books{
    char pub[100],bn[100];
    int cost ,num;
}book;
int main()
{
    book b[100];
    int n,i,c=0;
    FILE *fp;
    printf("input a number of books:");
    {
        scanf("%d",&n);
    }
   
    for(i=1;i<=n;i++)
    {  printf("book name %d",i);
      scanf("%s",b[i].bn);
      printf("book pub %d",i);
      scanf("%s",b[i].pub);
      printf("book cost %d",i);
      scanf("%d",&b[i].cost);
      printf("Number of copies %d",i);
      scanf("%d",&b[i].num);
    }
    fp=fopen("data.txt","w");
    if(fp==NULL) printf("error");
    else{
        fwrite(&b,sizeof(book),n,fp);
        
    }
    fclose(fp);
     fp=fopen("data.txt","r");
    if(fp==NULL) printf("error");
    else{
        fread(&b,sizeof(book),n,fp);
        for(i=1;i<=n;i++){
        if(strcmp(b[i].pub,"Oxford")==0)
        {
            c++;
        }}
        if(c==0) printf("\n Any book is not pubished by OXford");
        else printf("\n%d books published by Oxford",c);
    }
    fclose(fp);
    return 0;
    
    
}