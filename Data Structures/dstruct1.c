//Revesre string using pop function.
#include<stdio.h>
#include<string.h>
int size=5;
int top=4;
void pop(char a[])
{
int i=0;
char sr[15];

a[top];
sr[i]=a[top];
i++;
top = top-1;
printf("%s",sr);
}

void main()
{

char s[15]="HELLO",i;
for(i=0;strlen(s);i++)
{
if(s[i]=='\0')
{
break;
}
else{
pop(s);
}
}
printf("\n");
}
