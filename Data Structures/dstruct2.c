#include<stdio.h>
#include<string.h>
int size=6;
int top=-1;
void push(char a[],char data)
{
if(top>=size-1)
{
printf("Stack is full\n");
}
else{
top = top+1;
a[top]=data;
printf("%c is pushed in stack\n",a[top]);
}
}

void pop(char a[])
{
if(top==-1)
{
printf("Stack is empty\n");
}
else{
a[top];
printf("%c is poped from the stack\n",a[top]);
top = top-1;
}
}

void main()
{

char a[10]="[{()})",ch[20];

for(int i=0;strlen(a);i++)
{
if((a[i]=='[') || (a[i]=='{') || (a[i]=='('))
{
push(ch,a[i]);
}
else
{
	if((a[i]==')' && ch[top]=='(') || (a[i]=='}' && ch[top]=='{') || (a[i]==']' && ch[top]=='['))
	{
		pop(ch);
	}
	else
	{
		
		break;
	}
}
}
if(top==-1)
{
printf("Balanced\n");
}
else
{
printf("Not Balanced\n");
}
}
