#include<stdio.h>
int size=5;
int top=-1;
void push(int a[],int data)
{
if(top>=size-1)
{
printf("Stack is full\n");
}
else{
top = top+1;
a[top]=data;
printf("%d is pushed in stack\n",a[top]);
}
}

int pop(int a[])
{
if(top==-1)
{
printf("Stack is empty\n");
}
else{
a[top];
printf("%d is poped from the stack\n",a[top]);
top = top-1;
return a[top+1];
}
}

void deleteatmiddle(int s[])
{
if(top==(size/2))
{
pop(s);
return;
}
int x; 
x = pop(s);
deleteatmiddle(s);
push(s,x);
}

void main()
{
int a[size];
push(a,10);
push(a,20);
push(a,70);
push(a,30);
push(a,60);


deleteatmiddle(a);
}
