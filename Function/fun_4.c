#include<stdio.h>
void fac();
int fac1();
int b;

void main()
{
b = fac1();
printf("Factorial with int fun:%d\n",b);
fac();
}

void fac(int n)
{
printf("Enter the number :");
scanf("%d",&n);
int f,i;
f=1;
for(i=1;i<=n;i++)
{
f = f*i;
}
printf("Factorial with void fun :%d\n",f);
}

int fac1(int n)
{
printf("Enter the number :");
scanf("%d",&n);
int f,i;
f=1;
for(i=1;i<=n;i++)
{
f = f*i;
}
return f;
}
