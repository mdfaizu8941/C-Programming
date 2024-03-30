 #include <stdio.h>
 #include<string.h>
 void sorted(char[],int);
 int compare(char[],char[],int,int);
int main()
{
   char str1[90] ,str2[90];
   printf("Input a string:\n");
   fgets(str1,90,stdin);
   printf("input a second string:\n");
    fgets(str2,90,stdin);
   int l1=strlen(str1);
   int l2=strlen(str2);
   sorted(str1,l1);
   sorted(str2,l2);
   int res=compare(str1,str2,l1,l2);
   if(res==0)
   printf("strings are an anagram:");
   else printf("strings are not an anagram:");
    return 0;
}
void sorted(char str[],int l)
{
    int i,j;
    char temp;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-1-i;j++)
        {
            if(str[j]<str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
}
int compare(char str1[],char str2[], int l1,int l2)
{
    int i,f=0;
    for(i=0;i<l1;i++)
    {
        if(str1[i]!=str2[i])
        {
            f=1;
            break;
        }
    }
    return f;
}