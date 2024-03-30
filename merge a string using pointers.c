 #include <stdio.h>
 #include<string.h>
 void merge(char*,char*);
int main()
{
   char str1[90] ,str2[90];
   printf("Input a string:\n");
   fgets(str1,90,stdin);
   printf("input a second string:\n");
    fgets(str2,90,stdin);
   
   merge(str1,str2);
    return 0;
}
void merge(char *p,char*q)
{
    int i,j,temp;
    int l1=strlen(p);
    int l2=strlen(q);
    if(l1!=l2)
    {
        printf("strings are unequal:\n");
    }
    else
     {
        for(i=0;*(q+i)!='\0';i++)
        { 
            *(p+i+l1)=*(q+i);
        }
        *(p+i+l1)='\0';
         printf("String after merge:\n");
     puts(p);
     }
     
}