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

void pop(int a[])
{
if(top==-1)
{
printf("Stack is empty\n");
}
else{
a[top];
printf("%d is poped from the stack\n",a[top]);
top = top-1;
}
}

void main()
{

int a[size];
push(a,10);
push(a,20);
push(a,70);
push(a,100);
push(a,60);
pop(a);
pop(a);
}
