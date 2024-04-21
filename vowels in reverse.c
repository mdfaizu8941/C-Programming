 #include<stdio.h>
 #include<string.h>
 void vowels(char*,int);
 int main()
 {
     int l,i;
     char str[100];
     printf("input a string\n");
     fgets(str,100,stdin);
     l=strlen(str);
     vowels(str,l);
     return 0;
     
 }
 void vowels(char *s,int l)
 {
     int i;
     for(i=l;i>0;i--)
     {
         if(*(s+i)=='a'||*(s+i)=='e'||*(s+i)=='i'||*(s+i)=='o'||*(s+i)=='u'||*(s+i)=='A'||*(s+i)=='E'||*(s+i)=='O'||*(s+i)=='I'||*(s+i)=='U')
         {
            printf("%c",*(s+i)); 
         }
     }
 }