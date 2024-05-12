 #include <stdio.h>
#include<string.h>
int main()
{
    FILE *fp1,*fp2;
char ch,word[500];
int i ,j,count=0;
fp1=fopen("Data.txt","w");
if(fp1==NULL) printf("File Error");
else
{
    while((ch=getchar())!=EOF)
    {
        fputc(ch,fp1);
    }
    fclose(fp1);
}
fp1=fopen("Data.txt","r");
fp2=fopen("Del.txt","w");
if(fp1==NULL&& fp2==NULL)
printf("File Error");
else
{
    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch == ' ' || ch == '\n'){
         word[count] = '\0';
            if (strcmp(word, "a") != 0 && strcmp(word, "the") != 0 && strcmp(word, "an") != 0) {
                fprintf(fp2, "%s", word);
            }
            else {
                fprintf(fp2, " ");
            }
          
            fprintf(fp2, "%c", ch);
        
        }
        else {
            word[count++] = ch;
        }
        
    }
    }

    // Close the files
    fclose(fp1);
    fclose(fp2);

    printf("\nFile processing complete.\n");
    return 0;
} 
