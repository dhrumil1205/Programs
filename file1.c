#include<stdio.h>
void main()
{
char c1,c2,c=0,a=0;
FILE *fp1,*fp2;
fp1 = fopen("file.c","r");
fp2 = fopen("file.c","r");
int flag=0;
while(c1!=EOF || c2!=EOF)
{
c1 = getc(fp1);
c2 = getc(fp2);
if(c1!=c2)
{
flag = 1;
break;
}
else
{
flag=0;
}
if(c1!=EOF)
{
c++;
}
if(c2!=EOF)
{
a++;
}
}
if(flag==0)
{
printf("Both are same.\n");
}
printf("Size is %d & %d \n",c,a);
}
