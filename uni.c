#include<stdio.h>
#include<string.h>
union comp{
int x,y;
};
int main()
{
 union comp tab;
 printf("%d %d",tab.x,tab.y);
 return 0;
 }
