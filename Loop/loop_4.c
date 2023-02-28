#include<stdio.h>
void main()
{
int n,i;
printf("Enter the number of n :");
scanf("%d",&n);

for(i=n+1;i<(n+20);i++)
{
if(i%2==0)
{
printf("Even numbers are :%d\n",i);
}
}
for(i=n+1;i<(n+20);i++)
{
if(i%2!=0)
{
printf("Odd numbers are :%d\n",i);
}
}
}
