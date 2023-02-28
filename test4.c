#include<stdio.h>
#include<string.h>
void fun(char *s1 , char *s2)
{
int flag=0;
while(*s1='\0')
{
flag=0;
	if(*s1==*s2)
	{
	  flag=1;
	  break;
	}
	s2++;
	
	if(flag==0)
	{
	  break;
	}
s1++;
}
}

void main()
{
char s1[20],s2[20];
printf("Enter the string 1 :");
scanf("%s",s1);
printf("Enter the string 2 :");
scanf("%s",s2);
if(strlen(s1)==strlen(s2))
{
fun(s1,s2);
printf("Strings are anagram\n");
}
else
{
printf("Strings are not anagram\n");
}
}

