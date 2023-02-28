#include<stdio.h>
#include<string.h>

void main()
{
char s1[]="ABCD",s2[]="ABCD";
int cmp;
cmp = strcmp(s1,s2);
if(cmp==0)
{
printf("0\n");
}
if(cmp>0)
{
printf("%s > %s\n",s1,s2);
}
if(cmp<0)
{
printf("%s < %s\n",s1,s2);
}
}
