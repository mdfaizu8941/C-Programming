//wap to to print the element which hae the highest frequency in strinng :
#include<stdio.h>
#include<string.h>
void highFrequency(char[]);
int main()
{
char str[100];
printf("\nINPUT\t\n\n");
printf("Input a string to be split by spaces:\n");
fgets(str,100,stdin);
highFrequency(str);
return 0;
}
void highFrequency(char str[])
{
 int freq[20];
 char maxChar;
    int i,j=1;
    int l=strlen(str);
    for(i=0;i<l;i++)
    {
        freq[i]=1;
        for(j=i+1;j<l;j++)
        {
            if(str[i]==str[j])
            {
                freq[i]++;
                str[j]='\0';
                }
        }
            
    }
printf("\nOUTPUT\t\n");
printf("The highest frequency of string is:\n");
    for(i=0;i<l;i++)
    
    {
        for(j=1;j<l-1-1;j++)
        {
            if(freq[i]<freq[j])
            {
                freq[i]=freq[j];
            }
        }
    }
printf("%d",freq[0]);
    
}

