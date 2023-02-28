#include<stdio.h>
#include<string.h>
void fun(char *s1,char *s2)
{
char *p = s1;
while(*p!='\0')
{
p++;
}
while(*s2!='\0')
{
*p = *s2;
p++;
s2++;
}
printf("%s",p);
}
void main()
{
char string[]="Maniyar",dest[100]="Dhrumil ",fundest[100]="Dhrumil ";
strcat(dest,string);
printf("%s\n",dest);
fun(fundest,string);
printf("%s\n",fundest);

}
