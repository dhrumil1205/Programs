#include<stdio.h>
void main()
{
char c1,c2;
FILE *fp1,*fp2;
fp1 = fopen("file2.c","r");
fp2 = fopen("b.txt","w");
while(c1!=EOF)
{
c1 = getc(fp1);
putc(c1,fp2);
}
fclose(fp1);
fclose(fp2);
}
