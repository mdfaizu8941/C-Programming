//Write a program in C to split string by space into words.
#include <stdio.h>
#include<string.h>
void splitSpace(char[]);
int main()
{
char str[100];
printf("\tINPUT\t\n\n");
printf("Input a string to be split by spaces:\n");
fgets(str,100,stdin);
splitSpace(str);
    return 0;
}
void splitSpace(char str[])
{
    int l,i,p;
    l=strlen(str);
    printf("\tOUTPUT\t\n\n");
    printf("Strings or words after split by space are:\n");
    for(i=0;i<l;i++)
    { 
        if(str[i]!=' ')
        {
         printf("%c",str[i]);
            
        }
        else printf("\n");
    }

}

