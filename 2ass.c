   
       
#include <stdio.h>
#include<string.h>
int main()
{
     FILE *f;
     int i=0,n,max=0,min=100;
     char str[100], mn[100],ma[100],c;
     printf("Iput a paragraph:");
     f=fopen("hello.txt","w");
     while((c=getchar())!=EOF)
    {
       fputc(c,f); 
    }
    fclose(f);
    f=fopen("hello.txt","r");
    while(fscanf(f,"%s",str)!=EOF)
    { int l=strlen(str);
        if(l >max)
    {
        strcpy(ma,str);
        max=l;
    }
    if(l<min)
    {
         strcpy(mn,str);
        min=l;
    }
        
    }
    printf("\nthe lonest word is %s and its length is %d\n",ma,max);
     printf("the shorest word is %s and its length is %d",mn,min);
    
    
    fclose(f);
    return 0;
}
