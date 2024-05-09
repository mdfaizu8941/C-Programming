   

#include <stdio.h>
#include<string.h>
int main()
{
     char str[100];
     int i,j,freq[100];
     printf("input a string:\n");
fgets(str,100,stdin);
int l=strlen(str);
for(i=0;i<l;i++)
 {
     freq[i]=1;
    for(j=i+1;j<l;j++)
    {   
        if(str[i]==str[j])
        {
            str[j]='\0';
        } 
             
    }
}
printf("the each elemnt present :\n");
for(i=0;i<l;i++)
{
    if(str[i]!=' ' && str[i]!='\0')
    {
        printf(" %c:%d\n",str[i],freq[i]);
    }
}
    return 0;
}