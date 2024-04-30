 #include <stdio.h>
#include <stdlib.h>
typedef struct student
{
  char nm[20];
  int roll, marks;
  int yoa;
}stu;
int main ()
{
  stu s[100], temp;
  int i,j,n;
  printf("input a total number of student: ");
  scanf("%d",&n);
  printf("input:name,roll number,marks,year of admission:\n");
  for(i=0;i<n;i++)
	{
	  scanf("%s%d%d%d",s[i].nm,&s[i].roll,&s[i].marks,&s[i].yoa);
	}
  for(i=0;i<n;i++)
	{
	  for(j=0;j<n-i-1;j++)
		{ 
		  if(s[j].marks<s[j + 1].marks)
			
			{
			  temp=s[j];
			  s[j]=s[j+1];
			  s[j + 1] =temp;
			}

		}
	}
  printf("inputed: name roll marks year of joinig:(all are in assanding order acc. to marks):\n");
  for (i=0;i<n;i++)
	{
	printf ("%s %d %d %d ", s[i].nm,s[i].roll,s[i].marks,s[i].yoa);
	}
  return 0;
}
