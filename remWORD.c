#include<stdio.h>
#include<string.h>
 int main()
 {
     FILE *fp,*f;
    int i;
     char str[200],word[100],c;
     printf("input a string:");
     fgets(str,200,stdin);
     fp=fopen("faiz.txt","w");
     fputs(str,fp);
     fclose(fp);
       fp=fopen("faiz.txt","r");
        f=fopen("iz.txt","w");
 
        while((c=fgetc(fp))!=EOF){
            
            if(fscanf(fp,"%s",word)==1)
             {i=0;
               { if(strcmp(word,"the")==0)
                    { i=1;
                        
                }
                if(i==0) 
                {
                    fprintf(f,"%s",word);
                    printf("%s ",word);
                }
                    
            }
        }}
       fclose(f);
       fclose(fp);
 }