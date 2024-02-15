 #include <stdio.h>
#include <string.h>
int main()
{
    char str[100 ];
    int freq[100];
    int i, j, len;
    printf("Enter any string: ");
    fgets(str,100,stdin);
    len = strlen(str); 
   for(i=0;i<len;i++)
{
  freq[i]=1;
	 for(j=i+1;j<len;j++)
	{
  		if(str[i]==str[j])
		{
  		freq[i]++;
  		str[j]='\0';
 		 }

	}
}
  printf("the frequency of string is:");
 for(i=0;i<len;i++){
  if(str[i]!=' '&& str[i]!='\0')
  {
    printf("%c =%d\n",str[i],freq[i]);
  }
}
return 0;
}
