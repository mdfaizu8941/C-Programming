 #include <stdio.h>
 #include<string.h>
 void reverse(char*,int);
int main()
{
   char str[90];
   printf("Input a string:\n");
   fgets(str,90,stdin);
   int l=strlen(str);
   reverse(str,l);
    return 0;
}
void reverse(char *p,int l)
{
    int i,j,temp;
    for(i=0,j=l-1;i<j;i++,j--)
    {
        temp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=temp;
    }
    printf("Revrese of string is: ");
    for(i=0;i<l;i++)
    {
        printf("%c",*(p+i));
    }
     
}