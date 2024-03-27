 #include <stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,j=0;
    printf("input a string:\n");
    fgets(str,100,stdin);
    int l=strlen(str);
    
    printf("first length of string is %d\n",l);
    for(i=0;str[i]!='\0';i++)
    {
        if( str[i] >=97&& str[i]<=122|| str[i]>=65&& str[i]>=90)
        {
            str[j++]=str[i];
        }
    }
    str[j]='\0';
    int l1=strlen(str);
    printf("New length of string is %d\n",l1);
    printf("now string is:");
    puts(str);

    return 0;
}


