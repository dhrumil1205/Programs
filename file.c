#include<stdio.h>
void main()
{
char c;
FILE *fp;
fp = fopen("file.c","r");

while(c!=EOF)
{
c = getc(fp);
printf("%c",c);
}
}
