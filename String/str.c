#include<stdio.h>
//#include<string.h>
int fun(char *s)
{
int len=0;
printf("Length of %s is ",s);
while(*s!='\0')
{
len++;
s=s+1;
}
printf("%d\t\n",len);
}
void main()
{

char string[]="Dhrumil";
//len = strlen(string);
fun(string);
}
