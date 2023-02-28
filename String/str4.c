#include<stdio.h>
#include<string.h>
int isalphabet(char c)
{
if((c>='A' && c<='Z') || (c>='a' && c<='z'))
{
return 1;
}
else
{
return 0;
}
c++;
}



void main()
{
char str[50]="hello090@@einfo234chips";
int i;
for(i=0;i<strlen(str);i++)
{
if(isalphabet(str[i]))
{
printf("%c",str[i]);
}
}
printf("\n");

}
