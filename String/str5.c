#include<stdio.h>
#include<string.h>
void main()
{
char s[50]="My name is Dhrumil My company name is einfochips",w[5]="is",i,j;
int flag=1,count=0;
printf("%s\n",s);
for(i=0;i<strlen(s);i++)
{
flag=1;
	for(j=0;j<strlen(w);j++)
	{
		if(s[i+j]!=w[j])
		{
			flag=0;
			break;	
		}
		
	}
if(flag==1)
{
count++;
}
flag=1;
}
printf("Sub string occurs %d time in your original string\n",count);



}
