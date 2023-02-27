//using two push and two pop
#include<stdio.h>
int size=10;
int top1=-1;
int top2=10;
void display1(int *a)
{
int i;
for(i=0;i<=top1;i++)
{
printf("%d is pushed by push1\n",a[i]);
}
}
void display2(int *a)
{
int i;
for(i=10;i>=top2;i--)
{
printf("%d is pushed by push2\n",a[i]);
}
}
void push1(int a[],int data)
{
if((top2-top1)>1)
{
top1 = top1+1;
a[top1]=data;
printf("%d is pushed in stack\n",a[top1]);
}
else{
printf("Stack is overflow\n");
}
}
void push2(int a[],int data)
{
if((top2-top1)>1)
{
top2 = top2-1;
a[top2]=data;
printf("%d is pushed in stack\n",a[top2]);
}
else{
printf("Stack is overflow\n");
}
}

void pop1(int a[])
{
if(top1==-1)
{
printf("Stack is empty\n");
}
else{
a[top1];
printf("%d is poped from the stack\n",a[top1]);
top1 = top1-1;
}
}

void pop2(int a[])
{
if(top2==10)
{
printf("Stack is empty\n");
}
else{
a[top2];
printf("%d is poped from the stack\n",a[top2]);
top2 = top2+1;
}
}
void main()
{

int a[size];
push1(a,10);
push1(a,20);
push1(a,70);
push2(a,100);
push2(a,60);
push2(a,80);
push2(a,120);
push2(a,70);
push2(a,50);
push2(a,30);
push1(a,34);
push2(a,56);
display1(a);
display2(a);
}
