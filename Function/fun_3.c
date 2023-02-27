#include<stdio.h>
void pow1();
int pow2();
int b;

void main()
{
b = pow2(5,5);
pow1(6,3);
printf("Square of number with int fun :%d\n",b);
}

void pow1(int x,int y)
{
int ans=1;
for(int i=1;i<=y;i++)
{
ans = ans*x;
}
printf("Square of number with void fun :%d\n",ans);
}

int pow2(int x,int y)
{
int ans=1;
for(int i=1;i<=y;i++)
{
ans = ans*x;
}
return ans;
}
