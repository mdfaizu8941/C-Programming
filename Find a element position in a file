/* print the position of a character given
by user in the file between position m and n. (Positions and character is given by user,
consider the file already exist)*/

#include <stdio.h>
int main()
{
    FILE *fp;
char ch,c;
int m,n,i;
fp=fopen("hello.txt","w");
fprintf(fp,"Positions and character is given by user,consider the file already exist");
fclose(fp);
printf("inpt a character:");
scanf("%c",&c);
printf("Input alimit: ");
scanf("%d %d" ,&m,&n);
int pos;
fp=fopen("hello.txt","r");
 fseek(fp,m,1);
  printf("THE chacter present in positions:");
for(i=m;i<=n;i++)
{
    ch=fgetc(fp);
    if(ch==c)
    {
        pos=ftell(fp);
        printf(" %d ",pos-1);
    }
}
fclose(fp);

    return 0;
}
